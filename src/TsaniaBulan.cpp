#include "TsaniaBulan.h"

SOSBlink::SOSBlink(int pin) {
  _pin = pin;
}

void SOSBlink::begin() {
  pinMode(_pin, OUTPUT);
}

void SOSBlink::blinkSOS() {
  for (int i = 0; i < 3; i++) {
    dot();
  }
  delay(400);
  
  for (int i = 0; i < 3; i++) {
    dash();
  }
  for (int i = 0; i < 3; i++) {
    dot();
  }
}

void SOSBlink::dot() {
  digitalWrite(_pin, HIGH);
  delay(200);
  digitalWrite(_pin, LOW);
  delay(200);
}

void SOSBlink::dash() {
  digitalWrite(_pin, HIGH);
  delay(600);
  digitalWrite(_pin, LOW);
  delay(200);
}
