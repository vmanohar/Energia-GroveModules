/*
Grove LED Bar - Brightness Level Example
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
  bar.setGreenToRed(false);
  for (float i = 0; i < 10.1; i += 0.125) {
    bar.setLevel(i);
    delay(25);
  };
  for (float i = 0; i < 10.1; i += 0.125) {
    bar.setLevel(10-i);
    delay(25);
  };
  
  // Change orientation
  bar.setGreenToRed(true);
  for (float i = 0; i < 10.1; i += 0.125) {
    bar.setLevel(i);
    delay(25);
  };
  for (float i = 0; i < 10.1; i += 0.125) {
    bar.setLevel(10-i);
    delay(25);
  };
}
