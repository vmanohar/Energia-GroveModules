/*
Grove Piezo Vibration Sensor - Digital Detection Example
http://www.seeedstudio.com/wiki/Grove-_Piezo_Vibration_Sensor

Plug the Vibration sensor into port J17(D). Use the potentiometer to adjust sensitivity
CW - Decrease :: CCW - Increase

Ported for MSP-EXP430F5529, MSP-EXP432P401R, TM4c123 (Tiva C), and cc3200 LaunchPads By Cameron P. LaFollette

 ***IMPORTANT*** If using cc3200 LaunchPad, place a jumper wire from 
 BoosterPack pin 31 to 36
 then change sensorPin from 36 to 31
 Take note, that due to the nature of cc3200's analog pins,the potentiometer will need to be trimmed 
 very far CW, but not completely
 
 */

const int ledPin=RED_LED;
const int sensorPin=36; //for cc3200 change to const int sensorPin=31; 

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(sensorPin, INPUT);
} 
 
void loop() {
int sensorState = digitalRead(sensorPin); 
 Serial.println(sensorState);
 delay(50);
 if(sensorState == HIGH)
  {
    digitalWrite(ledPin,HIGH);
  }
 else
 {
  digitalWrite(ledPin,LOW);
  }
}
