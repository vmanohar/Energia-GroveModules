/*
Grove LED Bar - Toggle Example
This example will show you how to use toggleLed() function of this library.
The function lets you set a single led to the opposite of it's current value.

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
  // Start with all LEDs illuminated
  bar.setLevel(10);
  delay(1000);

  // Turn off LED 3
  bar.toggleLed(3);
  delay(1000);

  // Turn on LED 3
  bar.toggleLed(3);
  delay(1000);

  // Switch off all LEDs
  bar.setLevel(0);
  delay(1000);

  // Turn on LED 7
  bar.toggleLed(7);
  delay(1000);

  // Turn off LED 7
  bar.toggleLed(7);
  delay(1000);
}
