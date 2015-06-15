/*
Grove LED Bar - Random Example
This example will show you how to use setBits() function of this library.
Set any combination of LEDs using 10 bits.

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
  // Display a random value between 0 (all LEDs off) and 1023 (all LEDs on)
  bar.setBits(random(1024));
  delay(50);
}
