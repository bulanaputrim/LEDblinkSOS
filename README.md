# TsaniaBulan Library

## Author
1. Tsania Galuh Banggash (22/500322/TK/54834)
2. Bulan Aprilia Putri Murela (22/500326/TK/54834)

## Overview
**TsaniaBulan** library provides simple methods to control an LED toggle and send SOS signals using Morse code. This library is designed for use with Arduino and compatible boards.

## Installation

### Using Arduino Library Manager
1. Open the Arduino IDE.
2. Go to `Sketch` -> `Include Library` -> `Manage Libraries`.
3. Search for "TsaniaBulan".
4. Click `Install`.

### Manual Installation
1. Download the library from the [GitHub repository](https://github.com/bulanaputrim/TsaniaBulan).
2. Extract the downloaded zip file.
3. Move the `TsaniaBulan` folder to your Arduino libraries directory (usually located in `Documents/Arduino/libraries`).

## Usage
   ```cpp
   #include <TsaniaBulan.h>

   const int ledPin = 2;
   SOSBlink sos(ledPin);

   void setup() {
     sos.begin();
   }

   void loop() {
     sos.blinkSOS();
     delay(2000);
   }
