const int buttonPin = PUSH1;     // the number of Push Button 1 on Launchpad
const int buzzerPin = 36;      // the number of the buzzer pin J15(D)

// variables will change:
int tiltState = 0;         // variable for reading the tilt status

void setup() {
  // initialize the buzzer pin as an output:
  pinMode(buzzerPin, OUTPUT);      
  // initialize the tilt pin as an input:
  pinMode(buttonPin, INPUT_PULLUP); 
Serial.begin(9600);  
}

void loop(){
  // read the state of the tilt value:
  tiltState = digitalRead(buttonPin);
  Serial.println(tiltState);

  // check if the tilt is close.
  // if it is, the tiltState is HIGH:
  if (tiltState == LOW) {     
    // turn buzzer on:    
    digitalWrite(buzzerPin, HIGH);  
  } 
  else {
    // turn buzzer off:
    digitalWrite(buzzerPin, LOW); 
  }
}
