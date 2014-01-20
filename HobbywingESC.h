/*
  HobbywingESC.h - Library for manipulating a HobbywingESC without the typical RC control
  Created by Christian Rahn, Jan 19, 2014.
  Open release to the public - enjoy!
  
  Note: This library is created for a Hobbywing clone (Mystery Dragonfire) 30A ESC. Compatibility of other ESCs is, as of yet, untested.
  
*/

#ifndef HobbywingESC.h
#define HobbywingESC.h

#include "Arduino.h"

class HobbywingESC
{
  public:
    HobbywingESC(int pin);
    void arm();
    void throttle(int val);
    
  private:
    int _val;
  
  
};

#endif;