
const int dirPin = 2;
const int stepPin = 3;

const int STEPS_PER_REV=200;

void setup() {
  
  pinMode(dirPin,OUTPUT);
  pinMode(stepPin,OUTPUT);
}

void loop() {
  digitalWrite(dirPin,HIGH);

  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(2000);
  }

  delay(1000);

  digitalWrite(dirPin,LOW);

  for(int x = 0; x < STEPS_PER_REV * 2; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }

  delay(1000);
  
} 
