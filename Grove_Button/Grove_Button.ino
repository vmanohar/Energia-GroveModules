//Turns on and off a light emitting diode(LED) on LaunchPad, when pressing a pushbutton attached to pin 36. 
 
/*
 The circuit:
 * Connect a button module, such as COM22242P, to J17(D) on the Grove Base BossterPack 
 
 
 * Note: Ported MSP-EXP430F5529LP, MSP-EXP432P401R, TM4C123 (Tiva C),
   and cc3200 for Seeed Studios Grove ecosystem by Cameron P. LaFollette
 
 This example code is in the public domain.
 
 ***IMPORTANT*** If using cc3200 LaunchPad, place a jumper wire from 
 Boosterpack pin 31 to 36, and change buttonPin to 31 below
 
*/

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 31;     // the number of the pushbutton pin, change to 31 for cc3200
const int ledPin =  GREEN_LED;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}
