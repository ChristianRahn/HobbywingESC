/*
  HobbywingESC.h - Library for manipulating a HobbywingESC without the typical RC control
  Created by Christian Rahn, Jan 19, 2014.
  Open release to the public - enjoy!
  
  Note: This library is created for a Hobbywing clone (Mystery Dragonfire) 30A ESC. Compatibility of other ESCs is, as of yet, untested.
  
*/


#include "Arduino.h"
#include "HobbywingESC.h"


HobbywingESC::HobbywingESC(int pin) 
{
  pinMode(pin, output);
  _pin = pin;
}

void HobbywingESC::arm()
{
_time = millis();
  if (_time < 2000) {
    digitalWrite(_pin, 10);
    delay(2000);
    }
  else {digitalWrite(50);}
}

void HobbywingESC::throttle(int val) {
  _val = val;
  if (_val <181 && _val>50) {
    digitalWrite(_pin, _val);
    }
  else {
    Serial.println("Throttle out of bounds.");
    }
}

