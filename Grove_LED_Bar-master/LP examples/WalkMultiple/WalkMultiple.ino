/*
Grove LED Bar - Walk Multiple Example
This example will show you how to use setBits() function of this library.
Set any combination of LEDs using 10 bits.
This example walks through all 1024 (2^10) possible combinations on two LED Bars.

Ported for MSP-EXP430F5529, TM4c123 (Tiva C), and cc3200 LaunchPad By Cameron P. LaFollette

 ***IMPORTANT*** If using cc3200 LaunchPad, place a jumper wire from 
 BoosterPack pin 31 to 36, a wire from pin 29 to 35, 
 9 to 37, and 10 to 38
 then change Grove_LED_Bar bar2(35, 36, 0) to (29, 31, 0)
 and Grove_LED_Bar bar1(37, 38, 0) to (9, 10, 0)
 
 
*/

#include <Grove_LED_Bar.h>

// Arduino Clock pin, Data pin, Orientation 
// Grove_LED_Bar bar1(9, 8, 0); // Clock pin, Data pin, Orientation
//Grove_LED_Bar bar2(7, 6, 1);  // Clock pin, Data pin, Orientation

// LaunchPad Clock pin, Data pin, Orientation
Grove_LED_Bar bar1(37, 38, 0);  // for cc3200 change to Grove_LED_Bar bar1(9, 10, 0); 

Grove_LED_Bar bar2(35, 36, 0);  // for cc3200 change to Grove_LED_Bar bar2(29, 31, 0); 




void setup()
{
  // nothing to initialize
  bar1.begin();
  bar2.begin();
}

void loop()
{
  // 0 = 0x0 = all 10 LEDs turned off
  // 1023 = 0x3FF = all 10 LEDs lit up
  for (int i = 0; i <= 1023; i++)
  {
    bar1.setBits(i);
    bar2.setBits(i);
    delay(50);
  }
}
