/*******************************************************************************/

/*macro definitions of magnetic pin and LED pin*/
#define MAGNETIC_SWITCH 36 
#define LED	RED_LED//the on board LED of the Arduino or Seeeduino

void setup()
{
 	pinsInit();
}
 
void loop() 
{
	if(isNearMagnet())//if the magnetic switch is near the magnet?
	{
		turnOnLED();
	}
	else
	{
		turnOffLED();
	}
}
void pinsInit()
{
	pinMode(MAGNETIC_SWITCH, INPUT);
	pinMode(LED,OUTPUT);

      }

/*If the magnetic switch is near the magnet, it will return ture, */
/*otherwise it will return false								*/
boolean isNearMagnet()
{
	int sensorValue = digitalRead(MAGNETIC_SWITCH);
	if(sensorValue == HIGH)//if the sensor value is HIGH?
	{
		return true;//yes,return ture
	}
	else
	{
		return false;//no,return false
	}
}
void turnOnLED()
{
	digitalWrite(LED,HIGH);
}
void turnOffLED()
{
	digitalWrite(LED,LOW);
}
