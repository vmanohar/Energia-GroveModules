/*
Grove Piezo Vibration Sensor - Analog Detection Example
http://www.seeedstudio.com/wiki/Grove-_Piezo_Vibration_Sensor

Plug the Vibration sensor into port J17(D). Use the potentiometer to adjust sensitivity
CW - Decrease :: CCW - Increase

Ported for MSP-EXP430F5529, MSP-EXP432P401R, TM4c123 (Tiva C), and cc3200 LaunchPads By Cameron P. LaFollette

 ***IMPORTANT*** If using cc3200 LaunchPad, place a jumper wire from 
 BoosterPack pin 2 to 27
 then change int sensorPin = 27 to 9
 Take note, that due to the nature of cc3200's analog pins,the potentiometer will need to be trimmed 
 very far CW, but not completely
 
 */
 


const int ledPin=RED_LED;
const int sensorPin=27;// for cc3200 cange to const int sensorPin=2;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  //pinMode(sensorPin,INPUT);

} 
 
void loop() {
int sensorValue = analogRead(sensorPin); 
 Serial.println(sensorValue);
 delay(50);
 if(sensorValue>=1023)//needs to be 800 for msp432, 
  {
    digitalWrite(ledPin,HIGH);
  }
 else
 {
  digitalWrite(ledPin,LOW);
  }
}

