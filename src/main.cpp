#include <Arduino.h>
#include <SpotifyArduino.h>
#include "ScrollingText.h"

#define CLIENT_ID       "YOUR_CLIENT_ID"
#define CLIENT_SECRET   "YOUR_CLIENT_SECRET"

char hostname[] = "esp";

String ssid;
String passwd;

bool spotifyReady = false;
unsigned long timer;
uint16_t delayBetweenRequests = 1000;
uint8_t nothingPlayingCount = 0;

char repeatSpace[] = "          ";

bool connect();
void manualWiFi();

char callbackURI[50];
const char scope[] = "user-read-playback-state";

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <WiFiClientSecure.h>
#include <ESP8266mDNS.h>
#include <ArduinoJson.h>
#include <EEPROM.h>

#define E_WIFI         0
#define E_SPOTIFY     66
#define E_SSID         1
#define E_PASS        34
#define E_TOKEN       67

ESP8266WebServer server(80);
WiFiClientSecure client;
SpotifyArduino spotify(client, CLIENT_ID, CLIENT_SECRET);

CurrentlyPlaying current;

unsigned long oldTime;
unsigned long progressTimer;
uint8_t progressMultiplier;
bool scrollPaused;

#include <SSD1306Wire.h>

SSD1306Wire display(0x3c, SDA, SCL);

ScrollingText title(&display);
ScrollingText artist(&display);
ScrollingText album(&display);

void displayStatus(String header, String body="", String body2="", String body3="") {
  display.clear();
  display.setTextAlignment(TEXT_ALIGN_CENTER);
  display.drawString(64, 0, header);
  display.drawString(64, 16, body);
  display.drawString(64, 32, body2);
  display.drawString(64, 48, body3);
  display.display();
}

String readString(bool hidden=false) {
  char buff[32];
  bool readdone = false;
  int l=0;
  do
  {
    while (!Serial.available());
    char c = Serial.read();
    if (hidden) Serial.print('*');
    else Serial.print(c);
    if (c == '\n')
      readdone = true;
    else if (c == 8) // Backspace
      buff[--l] = 0;
    else
      buff[l++] = c;
  } while (!readdone);
  if (l > 0 && buff[l - 1] == '\r') {
    l--; // to remove \r if it is there
  }
  buff[l] = 0; // terminate the string
  return buff;
}

void saveWiFi()
{
  EEPROM.write(E_WIFI, 1);
  for (int i=0; i<32; i++)
  {
    EEPROM.write(i+E_SSID, ssid[i]);
    EEPROM.write(i+E_PASS, passwd[i]);
  }
  EEPROM.commit();

  Serial.println("WiFi saved!");
}

void eraseWiFi()
{
  for (int i=0; i<E_PASS+32; i++)
  {
    EEPROM.write(i, 0);
  }
  EEPROM.commit();

  Serial.println("WiFi erased!");
}

bool readWiFi()
{
  ssid = "";
  passwd = "";

  if (EEPROM.read(E_WIFI))
  {
    char buff[32];
    for (int i=0; i<32; i++)
      buff[i] = EEPROM.read(i+E_SSID);
    ssid = buff;

    for (int i=0; i<32; i++)
      buff[i] = EEPROM.read(i+E_PASS);
    passwd = buff;
    connect();
    return true;
  }
  return false;
}

bool readToken()
{
  if (EEPROM.read(E_SPOTIFY))
  {
    Serial.println("Token is saved");
    String refreshToken = "";
    for (int i=0; i<200; i++)
      refreshToken += char(EEPROM.read(i+E_TOKEN));

    Serial.println("Got token");
    Serial.println(refreshToken);
    displayStatus("Authenticating...");

    spotify.setRefreshToken(refreshToken.c_str());
    if (spotify.refreshAccessToken())
    {
      Serial.println("Recovered token refreshed!");
      spotifyReady = true;
      return true;
    }
  }
  return false;
}

bool connect()
{
  Serial.printf("Connecting to: %s\n", ssid.c_str());
  displayStatus("Connecting...", ssid);

  WiFi.begin(ssid, passwd);

  delay(1500);

  while (WiFi.status() == WL_DISCONNECTED)
  {
    Serial.print('.');
    delay(250);
  }

  if (WiFi.status() == WL_CONNECTED)
  {
    displayStatus("Connected!", ssid.c_str());

    Serial.println("Connected!");
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());
    saveWiFi();
    return true;
  }

  Serial.print("Failed to connect: ");
  displayStatus("Failed.", ssid, "", "Connect serial");
  Serial.println(WiFi.status());

  eraseWiFi();
  manualWiFi();
  return false;
}

void manualWiFi()
{
  Serial.println("Scanning");
  WiFi.scanNetworksAsync(NULL);

  int8_t found = 0;
  do
  {
    found = WiFi.scanComplete();
    Serial.print('.');
    delay(250);
  } while (found<=0);

  Serial.printf(" Found %d networks\n", found);

  for (int i=0; i<found; i++)
    Serial.printf("\t%X: %s\n", i, WiFi.SSID(i).c_str());
  Serial.print("\n\nEnter a network index: ");

  while (!Serial.available());

  char c = Serial.read();

  if (c >= 97) // Lowercase letter
    ssid = WiFi.SSID(c-'a');
  else if (c >= 65) // Uppercase letter
    ssid = WiFi.SSID(c-'A');
  else // Digit
    ssid = WiFi.SSID(c-'0');

  Serial.printf("Selected %s\n", ssid.c_str());

  Serial.print("Enter password: ");
  passwd = readString(true);
  Serial.println();
  connect();
}

void printAuth()
{
  Serial.printf("\n\nhttps://accounts.spotify.com/authorize?client_id=%s&response_type=code&redirect_uri=%s&scope=%s\n", CLIENT_ID, callbackURI, scope);  
}

void setup()
{
  Serial.begin(115200);
  display.init();
  display.flipScreenVertically();
  display.setFont(Roboto_Condensed_13);
  EEPROM.begin(512);

  title.setHeight(0);
  artist.setHeight(16);
  album.setHeight(32);

  sprintf(callbackURI, "http://%s.local/callback/", hostname);

  if (!readWiFi())
    manualWiFi();

  if (MDNS.begin(hostname))
    Serial.println("MDNS responder started");

  client.setFingerprint(SPOTIFY_FINGERPRINT);

  server.on("/callback/", []() {
    String code = "";
    const char *refreshToken = NULL;
    for (uint8_t i = 0; i < server.args(); i++)
    {
      if (server.argName(i) == "code")
      {
        code = server.arg(i);
        refreshToken = spotify.requestAccessTokens(code.c_str(), callbackURI);
      }
    }

    if (refreshToken != NULL)
    {
      server.send(200, "text/plain", refreshToken);
      spotifyReady = true;

      EEPROM.write(E_SPOTIFY, 1);
      for (int i=0; i<200; i++)
        EEPROM.write(i+E_TOKEN, refreshToken[i]);
      EEPROM.commit();
    }
    else
    {
      server.send(404, "text/plain", "Failed to load token, check serial monitor");
    }
  });

  server.begin();
  Serial.println("HTTP server started");

  if (!readToken())
  {
    printAuth();
    displayStatus("Connect serial", "to sign in");
  }
}

void menu()
{
  if (Serial.available() > 0)
  {
    bool quit = false;
    do
    {
      char c = Serial.read();
      Serial.println("Menu:");
      Serial.println("\t1. Change WiFi");
      Serial.println("\t2. Sign in");
      Serial.println("\tQ. Quit");

      while (!Serial.available());

      c = Serial.read();

      switch (c)
      {
        case '1':
          manualWiFi();
          quit = true;
          break;
        case '2':
          spotifyReady = false;
          printAuth();
          quit = true;
          break;
        case 'q':
        case 'Q':
          quit = true;
          break;
        default:
          continue;
      }
    } while (!quit);
  }
}

void drawProgressBar()
{
  if ((millis() - progressTimer) >= 1000 && current.isPlaying)
  {
    progressTimer = millis();
    progressMultiplier++;
  }
  float percentage = ((float)(current.progressMs + (progressMultiplier*1000)) / (float)current.durationMs) * 100;

  display.drawProgressBar(1, 50, 126, 10, (int)percentage);
}

void displayCurrentlyPlaying(CurrentlyPlaying currentlyPlaying, int status)
{
  display.setTextAlignment(TEXT_ALIGN_LEFT);
  switch (status) {
    case 200:
      delayBetweenRequests = 1000;
      nothingPlayingCount = 0;
      progressMultiplier = 0;
    break;

    case 204:
      display.clear();
      if (nothingPlayingCount < 3) {
        nothingPlayingCount++;

        title.setText("");
        artist.setText("");
        album.setText("");

        displayStatus(F("Nothing playing"));

        delayBetweenRequests = 5000;
      }
      display.display();
      break;
    
    default:
      displayStatus("Error", String(status));
      break;
  }
}

void handleCurrentlyPlaying(CurrentlyPlaying currentlyPlaying)
{
  current = currentlyPlaying;

  if (title.getText().c_str() != current.trackName)
    title.setText(current.trackName);
  if (artist.getText().c_str() != current.artists[0].artistName)
    artist.setText(current.artists[0].artistName);
  if (album.getText().c_str() != current.albumName)
    album.setText(current.albumName);
}

bool pauseScroll(uint16_t pauseTime)
{
  uint16_t scrollers = 0b0000;

  if (title.isScrolling()) scrollers |= 0b0001;
  if (artist.isScrolling()) scrollers |= 0b0010;
  if (album.isScrolling()) scrollers |= 0b0100;

  if (scrollers == 0b0000)
  {
    if (!scrollPaused)
    {
      oldTime = millis();
      scrollPaused = true;
    }
    else if ((millis() - oldTime) >= pauseTime)
    {
      title.enableScroll();
      artist.enableScroll();
      album.enableScroll();
      scrollPaused = false;
    }
    return true;
  }
  return false;
}

void loop()
{
  MDNS.update();
  server.handleClient();
  menu();
  if (spotifyReady)
  {
    if (pauseScroll(8000))
    {
      if ((millis() - timer) >= delayBetweenRequests)
      {
        unsigned long before = millis();
        int status = spotify.getCurrentlyPlaying(handleCurrentlyPlaying);
        displayCurrentlyPlaying(current, status);
        Serial.printf("Request time: %d\n", int(millis() - before));
        timer = millis();
      }
    }

    display.clear();
    title.draw();
    artist.draw();
    album.draw();
    drawProgressBar();
    display.display();
  }
}
