// === OTA Infrastruktur (bitte nicht ändern) ===
#include <WiFi.h>
#include <ArduinoOTA.h>

const char* ssid = "WIFI-Name";
const char* password = "wifi-password";
const char* otapass = "ota-password";

void ota_setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) delay(500);
  ArduinoOTA.setPassword(otapass);
  ArduinoOTA.begin();
  pinMode(2, OUTPUT);   // LED
  pinMode(4, INPUT);    // Lichtsensor
}

// === Dein Projekt beginnt hier ===

#include <math.h>

int pwmWert = 0;
const int sensorPin = 4;
const int ledPin = 2;

void setup() {
  ota_setup(); 
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  ArduinoOTA.handle();

  bool istDunkel = digitalRead(sensorPin) == LOW;
  int ziel = istDunkel ? sinusPWM() : 0;

  // Sanfte Annäherung: Gewichtung alt/neu (Mittelung)
  pwmWert = pwmWert * 0.9 + ziel * 0.1;

  analogWrite(ledPin, pwmWert);
  delay(10);
}

int sinusPWM() {
  float phase = millis() / 2000.0 * 2 * PI;
  float sinusWert = (sin(phase) + 1.0) / 2.0;
  return int(sinusWert * 255);
}
