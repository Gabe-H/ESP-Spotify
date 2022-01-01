#include <Arduino.h> 
#include <ESP8266WebServer.h>
#include <WiFiClientSecure.h>
#include <SSD1306Wire.h>
#include <SpotifyNet.h>
#include <EEPROM.h>

// #include <network.h>

unsigned long timer;
const uint16_t delayBetweenRequests = 1000;
unsigned int failedCount;
int requestStatus;
int nothingPlayingCount;

ESP8266WebServer server(80);
WiFiClientSecure client;
SSD1306Wire display(0x3c, SDA, SCL);   // ADDRESS, SDA, SCL  -  SDA and SCL usually populate automatically based on your board's pins_arduino.h e.g. https://github.com/esp8266/Arduino/blob/master/variants/nodemcu/pins_arduino.h
SpotifyNet net(server, client);

void setup()
{
  Serial.begin(115200);
  display.init();
  display.flipScreenVertically();
  display.setFont(Roboto_Condensed_13);
  while (!net.connectToWiFi());
  net.serverSetup();
  net.login();
}

void clearSerial()
{
  while (Serial.available())
    char c = Serial.read();
}

void displayCurrentlyPlaying(CurrentlyPlaying currentlyPlaying)
{
  display.clear();
  display.setTextAlignment(TEXT_ALIGN_LEFT);
  failedCount = 0;
  switch (requestStatus) {
    case 200: {
      failedCount = 0;
      nothingPlayingCount = 0;
      display.drawString(0, 0, currentlyPlaying.trackName);
      display.drawString(0, 16, currentlyPlaying.artists[0].artistName);
      display.drawString(0, 32, currentlyPlaying.albumName);

      float precentage = ((float) currentlyPlaying.progressMs / (float) currentlyPlaying.durationMs) * 100;
      display.drawProgressBar(1, 50, 126, 10, (int)precentage);
    }
      break;

    case 204:
      if (nothingPlayingCount < 3) {
        nothingPlayingCount++;
        Serial.println(nothingPlayingCount);
        display.drawString(0, 0, F("Nothing playing"));
      }
      break;
    
    default:
      // display.drawString(0, 0, F("ERROR"));
      // display.drawString(0, 16, F("Please reset"));
      break;
  }
  display.display();
}

void menu()
{
  if (Serial.available() > 0)
  {
    clearSerial();
    bool quit = false;
    do
    {
      Serial.println("\nConfiguration:");
      Serial.println("\t1. Network setup");
      Serial.println("\t2. Login");
      Serial.println("\t3. Get currently playing");
      Serial.println("\tQ. Quit");

      while (!Serial.available());

      char c = Serial.read();
      switch (c)
      {
        case '1':
          while (!net.connectToWiFi());
          break;
        case '2':
          net.login();
          quit = true;
          break;
        case '3':
          // requestStatus = net.requestCurrentlyPlaying(displayCurrentlyPlaying);
          break;
        case 'q':
        case 'Q':
          quit = true;
          break;
          
      }
    } while (!quit);
    
  }
  else
  {
    return;
  }
}

void loop()
{
  if ((millis() - timer) >= delayBetweenRequests)
  {
    if (net.isReady())
      requestStatus = net.requestCurrentlyPlaying(displayCurrentlyPlaying);
    timer = millis();
  }
  menu();
  net.loop();
}