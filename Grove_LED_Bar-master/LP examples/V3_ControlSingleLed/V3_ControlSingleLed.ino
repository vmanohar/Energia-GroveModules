/*
Grove LED Bar - Control Single LED Example
...

Ported for MSP-EXP430F5529, TM4c123 (Tiva C), and cc3200 LaunchPad By Cameron P. LaFollette

 ***IMPORTANT*** If using cc3200 LaunchPad, place a jumper wire from 
 BoosterPack pin 31 to 36 and a wire from pin 29 to 35, 
 then change Grove_LED_Bar bar(35, 36, 0) to (29, 31, 0)
 
*/

#include <Grove_LED_Bar.h>

// Arduino Clock pin, Data pin, Orientation 
// Grove_LED_Bar bar(9, 8, 0); // Clock pin, Data pin, Orientation

// LaunchPad Clock pin, Data pin, Orientation
Grove_LED_Bar bar(35, 36, 0);  // for cc3200 change to Grove_LED_Bar bar(29, 31, 0); 


void setup()
{
  // nothing to initialize
  bar.begin();
}

void loop()
{
  // Simulate police LED lights using setLed method
  for (float i = 0; i < 1.1; i += .125f) {
    bar.setLed(1, i);
    bar.setLed(2, i);
    bar.setLed(3, 1 - i);
    bar.setLed(4, 1 - i);
    delay(50);
  };
  
  for (float i = 0; i < 1.1; i += .125f) {
    bar.setLed(1, 1 - i);
    bar.setLed(2, 1 - i);
    bar.setLed(3, i);
    bar.setLed(4, i);
    delay(50);
  };
}
