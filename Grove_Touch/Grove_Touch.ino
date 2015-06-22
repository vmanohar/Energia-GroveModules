// Grove Touch module Sketch for MSP430, Tiva C, MSP432, and CC3200
// for cc3200 jumper BP pins 31 and 36
const int TouchPin=36; // for CC3200change to 31  
const int ledPin=RED_LED;
void setup() {
pinMode(TouchPin, INPUT);
pinMode(ledPin,OUTPUT);
} 
 
void loop() {
int sensorValue = digitalRead(TouchPin);
if(sensorValue==1)
{
digitalWrite(ledPin,HIGH);
}
else
{
digitalWrite(ledPin,LOW);
}
}
