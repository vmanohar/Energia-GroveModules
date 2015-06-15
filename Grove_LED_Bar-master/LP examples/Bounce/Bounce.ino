/*
Grove LED Bar - Bounce Example
This example will show you how to use getBits() function of this library.
The getBits() function returns the current state so you can modify it.
Use the setBits() function to save the new state.

Ported for MSP-EXP430F5529, TM4c123 (Tiva C), and cc3200 LaunchPad By Cameron P. LaFollette

 ***IMPORTANT*** If using cc3200 LaunchPad, place a jumper wire from 
 BoosterPack pin 31 to 36 and a wire from pin 29 to 35, 
 then change Grove_LED_Bar bar(35, 36, 0) to (29, 31, 0)
*/

#include <Grove_LED_Bar.h>

// Arduino Clock pin, Data pin, Orientation 
// Grove_LED_Bar bar(7, 6, 0);  

// LaunchPad Clock pin, Data pin, Orientation
Grove_LED_Bar bar(35, 36, 0);  // for cc3200 change to Grove_LED_Bar bar(29, 31, 0); 

unsigned int state;

void setup()
{
  // nothing to initialize
  bar.begin();
}

void loop()
{
  // Switch on the first two LEDs
  bar.setLevel(2);

  // Get the current state (which is 0x3)
  state = bar.getBits();

  // Bounce to the right
  for (int i = 0; i < 8; i++)
  {
    // Bit shift left and update
    state <<= 1;
    bar.setBits(state);
    delay(200);
  }

  // Bounce to the left
  for (int i = 0; i < 8; i++)
  {
    // Bit shift right and update
    state >>= 1;
    bar.setBits(state);
    delay(200);
  }
}
