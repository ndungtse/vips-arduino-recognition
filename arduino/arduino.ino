int redPin = 4; 
int bluePin = 2;
int yellowPin = 6;

void setup() {
  pinMode(redPin, OUTPUT); 
  pinMode(bluePin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
  if (Serial.available() > 0) {
    char receivedChar = Serial.read(); // Read the incoming data
    if (receivedChar == '1') { // If '1' is received
      digitalWrite(bluePin, HIGH); // Turn on the LED
      digitalWrite(yellowPin, LOW); 
      digitalWrite(redPin, LOW); 
    }
    else if(receivedChar == '2'){
      digitalWrite(yellowPin, HIGH); 
      digitalWrite(redPin, LOW); 
      digitalWrite(bluePin, LOW); 
    } else if(receivedChar == '3') {
      digitalWrite(redPin, HIGH); 
      digitalWrite(yellowPin, LOW); 
      digitalWrite(bluePin, LOW); 
    } else {
      digitalWrite(redPin, LOW); 
      digitalWrite(yellowPin, LOW); 
      digitalWrite(bluePin, LOW); 
    }
  }
}
