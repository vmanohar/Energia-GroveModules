/*
Grove LED Bar - Control Single LED Example
This example will show you how to use the setLed() function of this library.
There are 10 LEDs in the Grove LED Bar.
Use this method to set a single LED.

Syntax setLed(led, state)
led (1-10)
state (0=off, 1=on)

Ported for MSP-EXP430F5529, TM4c123 (Tiva C), and cc3200 LaunchPad By Cameron P. LaFollette

 ***IMPORTANT*** If using cc3200 LaunchPad, place a jumper wire from 
 BoosterPack pin 31 to 36 and a wire from pin 29 to 35, 
 then change Grove_LED_Bar bar(35, 36, 0) to (29, 31, 0)
*/

#include <Grove_LED_Bar.h>
//Arduino
//Grove_LED_Bar bar(9, 8, 0);  // Clock pin, Data pin, Orientation

// LaunchPad Clock pin, Data pin, Orientation
Grove_LED_Bar bar(35, 36, 0);  // for cc3200 change to Grove_LED_Bar bar(29, 31, 0); 


void setup()
{
  // nothing to initialize
  bar.begin();
}

void loop()
{
  // Set LED 3 on
  bar.setLed(3, 1);
  delay(500);

  // Set LED 5 on
  bar.setLed(5, 1);
  delay(500);

  // Set LED 7 on
  bar.setLed(7, 1);
  delay(500);

  // Set LED 3 off
  bar.setLed(3, 0);
  delay(500);

  // Set LED 5 off
  bar.setLed(5, 0);
  delay(500);

  // Set LED 7 off
  bar.setLed(7, 0);
  delay(500);

  // Turn all LEDs on
  for (int i = 1; i <= 10; i++)
  {
    bar.setLed(i, 1);
    delay(500);
  }

  // Turn all LEDs off
  for (int i = 1; i <= 10; i++)
  {
    bar.setLed(i, 0);
    delay(500);
  }
}
