int val;
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	analogRead(27);
	delay(10);
	val = analogRead(27);
	Serial.println(val);
	delay(200);
}
