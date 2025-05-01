📜 Venti-Kasten – Changelog

Dokumentation der Entwicklungsschritte des Projekts "Venti-Kasten – Der virtuelle Naturbaum".

[1.6] – Mai 2025

Vertiefung des Regelverhaltens für die adaptive Lüftungssteuerung:
– Einführung eines Lernalgorithmus zur Optimierung von Lüftungsintervallen auf Basis von Temperatur-/Feuchtigkeitsdifferenzen (innen/außen).
– Erste Konzeptüberlegungen zur Approximation der optimalen Lüftungsdauer und -häufigkeit durch Messwertanalyse.
– Nutzung von DeepSleep-Mechanismen zur Energieeinsparung im ESP32-Mikrocontroller.
– Diskussion möglicher Abschaltstrategien für Sensoren im Ruhezustand zur Stromoptimierung.
– Klare Abgrenzung von Mess-, Lern- und Betriebsphase mit Fokus auf minimierten Stromverbrauch im Feld.

[1.5.0] – April 2025

Erweiterungen gegenüber Version 1.4

- Einführung eines aktiven Einschubmoduls (Lüftereinheit) auf Basis der vorhandenen Windelschiene (Varroawindel).
- Luftführung über Einschub von unten links, Strömung durch Beute, Rückführung über Deckelstruktur.
- Integration von Sensormodulen im Deckel: Temperatur, Luftfeuchtigkeit, CO₂, optional VOC/Licht.
- Konzeption eines modularen Sensornetzwerks (z. B. Zigbee, 433 MHz, GSM) mit kurzen Reichweitenanforderungen.
- Energieversorgung über wettergeschützte Powerbank mit optionaler PV-Nachladung (Hybridkonzept).
- Auswahl flexibler Mikrocontroller-Plattformen: ESP32, Arduino, Raspberry Pi Pico etc.
- Fokus auf modulare Erweiterbarkeit und stromsparende Dauerlösungen (Plug-in-Prinzip).

[1.4] – April 2025

Erweiterungen gegenüber Version 1.3

- Einführung des U-Flow-Konzepts zur Luftzirkulation durch natürliche Strömung.
- Nutzung des vorhandenen Gaze-Bodens als Einblasfläche – keine baulichen Eingriffe nötig.
- Oben modifizierter Deckel mit Hohlraum und Gaze-Zonen links/rechts zur Strömungslenkung.
- Steuerung, Sensorik und Stromversorgung im Deckel integriert.
- Konzept vermeidet Komponenten im Brut-/Honigraum, modular und wartungsarm.

[1.3] – April 2025

- Einführung eines modularen Anschlusskonzepts ("BEE-NET") zur Verbindung von Zusatzsensorik.
- Integration eines CO₂-Sensors als Frühwarnsystem für Schwarmstimmung und Aktivität.
- Erfassung von Stockgewicht, Wetterdaten und Innenkamera als anschließbare Sensorik.
- Vorstellung eines zweidrahtbasierten Bussystems für Energie- und Datenübertragung.

[1.2] – April 2025

- Forschungsprotokoll zur Erprobung des Venti-Kastens.
- Vergleich zwischen Kontroll- und Versuchsvolk.
- Bewertungskriterien: Stockgewicht, Innenklima, Honigreife, Schwarmstimmung.

[1.1] – April 2025

- Integration eines Luftvolumenmodells für Segeberger Beuten (1–3 Zargen).
- Einführung einer Wasserdampfaustragsabschätzung auf Basis Innen-/Außenklimadaten.
- Entwicklung eines Konzepts zur Schwarmprävention durch schnellere Honigreifung und Platzoptimierung.
- Diskussion alternativer Lüftungskonzepte: servo-gesteuerte Klappe versus solarbetriebener Mikro-Lüfter.
- Korrektur der Bezeichnung auf Segeberger Beute (statt "Sägeberger").

[1.0] – April 2025

Erstveröffentlichung

- Grundkonzept: Adaptive Konvektionslüftung für Bienenbeuten.
- Ziel: Verbesserung der Luftfeuchtigkeit und Temperaturstabilität innerhalb der Beute.
- Umfunktionierung des Futterkastens zur Klimasteuerzentrale.
- Definition der Systemkomponenten: Sensorik, Aktorik, Mikrocontroller, PV-Versorgung.
- Fokus auf Nachhaltigkeit und Verbesserung der Lebensqualität der Bienen.
