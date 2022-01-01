#include "Arduino.h"
#include "SpotifyNet.h"


SpotifyNet::SpotifyNet(ESP8266WebServer &server, WiFiClientSecure &client)
{
  this->server = &server;
  this->client = &client;
  spotify = new SpotifyArduino(client, _clientId.c_str(), _clientSecret.c_str());
}

void SpotifyNet::loop()
{
  MDNS.update();
  server->handleClient();
}

void SpotifyNet::clearSerial()
{
  while (Serial.available())
    char c = Serial.read();
}

bool SpotifyNet::connectToWiFi()
{
  Serial.setTimeout(20*1000);
  WiFi.mode(WIFI_STA);

  Serial.println("\n\nPress any key to scan WiFi networks");

  while (!Serial.available());

  Serial.print("Scanning.");
  WiFi.scanNetworksAsync(NULL);

  while (WiFi.scanComplete() <= 0)
  {
    Serial.print('.');
    delay(200);
  }

  uint8_t n_cnt = WiFi.scanComplete();
  Serial.printf("\n\n Found %d networks!\n\n", n_cnt);

  for (int i=0; i<n_cnt; i++)
  {
    Serial.printf("\t%d. %s\n", i+1, WiFi.SSID(i).c_str());
  }

  Serial.print("Enter the network index to connect to: ");
  clearSerial();
  Serial.println();

  while (!Serial.available());
  uint8_t n_sel = int(Serial.read()) - '0' - 1;

  Serial.printf("Selected: %s\n", WiFi.SSID(n_sel).c_str());

  Serial.print("Password: ");
  clearSerial();

  while (!Serial.available());

  if (Serial.available()) {
    char buff[32];
    int l = Serial.readBytesUntil('\n', buff, sizeof(buff));
    if (l > 0 && buff[l - 1] == '\r') {
      l--; // to remove \r if it is there
    }
    buff[l] = 0; // terminate the string
    _passwd = buff;
  }

  WiFi.begin(WiFi.SSID(n_sel), _passwd.c_str());

  delay(1000);

  while (WiFi.status() == WL_DISCONNECTED)
  {
    Serial.print('.');
    delay(500);
  }

  if (WiFi.status() == WL_CONNECTED)
  {
    Serial.println("Connected!");
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());
    return true;
  }
  else
  {
    Serial.print("Failed: ");
    Serial.println(WiFi.status());
  }

  return false;
}

void SpotifyNet::handleCallback()
{
  String code = "";
  const char *refreshToken = NULL;
  for (uint8_t i = 0; i < server->args(); i++)
  {
    if (server->argName(i) == "code")
    {
      code = server->arg(i);
      refreshToken = spotify->requestAccessTokens(code.c_str(), _callbackURI.c_str());
    }
  }

  if (refreshToken != NULL)
  {
    server->send(200, "text/plain", refreshToken);
    spotifyReady = true;
  }
  else
  {
    server->send(404, "text/plain", "Failed to load token, check serial monitor");
  }
}

void SpotifyNet::handleNotFound()
{
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server->uri();
  message += "\nMethod: ";
  message += (server->method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server->args();
  message += "\n";

  for (uint8_t i = 0; i < server->args(); i++)
  {
    message += " " + server->argName(i) + ": " + server->arg(i) + "\n";
  }

  Serial.print(message);
  server->send(404, "text/plain", message);
}

void SpotifyNet::serverSetup()
{
  client->setFingerprint(SPOTIFY_FINGERPRINT); // These expire every few months

  if (MDNS.begin("arduino"))
  {
    Serial.println("MDNS responder started");
  }

  server->on("/callback/", std::bind(&SpotifyNet::handleCallback, this));
  server->onNotFound(std::bind(&SpotifyNet::handleNotFound, this));
  server->begin();
  Serial.println("HTTP server started");
}

bool SpotifyNet::isReady()
{
  return spotifyReady;
}

void SpotifyNet::login()
{
  Serial.println("Click the link below to sign in:\n\t");
  Serial.printf("https://accounts.spotify.com/authorize?client_id=%s&response_type=code&redirect_uri=%s&scope=%s\n", CLIENT_ID, _callbackURI.c_str(), _scope.c_str());
}

int SpotifyNet::requestCurrentlyPlaying(processCurrentlyPlaying callback)
{
  Serial.print("Free Heap: ");
  Serial.println(ESP.getFreeHeap());

  Serial.println("getting currently playing song:");
  // Market can be excluded if you want e.g. spotify.requestCurrentlyPlaying()
  int status = spotify->getCurrentlyPlaying(callback);
  if (status == 200)
  {
    Serial.println("Successfully got currently playing");
  }
  else if (status == 204)
  {
    Serial.println("Doesn't seem to be anything playing");
  }
  else
  {
    Serial.print("Error: ");
    Serial.println(status);
  }
  return status;
}
