#ifndef TsaniaBulan_H
#define TsaniaBulan_H

#include <Arduino.h>

class SOSBlink {
  public:
    SOSBlink(int pin);
    void begin();
    void blinkSOS();

  private:
    int _pin;
    void dot();
    void dash();
};

#endif
