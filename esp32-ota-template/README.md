# ESP32 OTA LED PWM Demo

Dies ist ein ESP32-Projekt mit OTA-Unterstützung (Over-the-Air-Update) und einer per PWM gesteuerten LED.

## Features

- WLAN-Anbindung (SSID + Passwort)
- OTA-Update über das Arduino IDE
- Pulsierendes LED-Licht per Sinusfunktion
- Optionaler Helligkeitssensor über GPIO 4
- Modularer Aufbau (OTA getrennt vom Projektcode)

## Aufbau

Die LED ist an GPIO 2 angeschlossen. Die PWM-Frequenz beträgt 5 kHz.

## Nutzung

1. Board im Arduino IDE auswählen (`ESP32 Dev Module`)
2. WLAN-Zugangsdaten eintragen
3. Erstes Upload per USB
4. Danach OTA-Update nutzen über Netzwerk
