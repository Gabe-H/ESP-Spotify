#ifndef Spotify_Net_h
#define Spotify_Net_h

#include "Arduino.h"
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <SpotifyArduino.h>
#include <ArduinoJson.h>

#include "creds.h"

class SpotifyNet
{
  public:
  SpotifyNet(ESP8266WebServer &server, WiFiClientSecure &client);
  bool connectToWiFi();
  void serverSetup();
  void loop();
  void login();
  int requestCurrentlyPlaying(processCurrentlyPlaying callback);
  CurrentlyPlaying getCurrent();
  bool isReady();


  private:
  String _clientId = CLIENT_ID;
  String _clientSecret = CLIENT_SECRET;
  String _callbackURI = "http%3A%2F%2Farduino.local%2Fcallback%2F";
  String _scope = "user-read-playback-state%20user-modify-playback-state";
  bool spotifyReady = false;
  String _ssid;
  String _passwd;
  ESP8266WebServer *server;
  WiFiClientSecure *client;
  SpotifyArduino *spotify;
  CurrentlyPlaying _current;

  void clearSerial();
  void handleNotFound();
  void handleCallback();


};

#endif
