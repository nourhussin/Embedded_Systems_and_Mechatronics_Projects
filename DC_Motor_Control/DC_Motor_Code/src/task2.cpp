#include<Arduino.h>
const int MotorIN1 = 8;
const int MotorIN2 = 9;
const int MotorEN = 11;

void setup(){
    pinMode(MotorIN1, OUTPUT);
    pinMode(MotorIN2, OUTPUT);
    pinMode(MotorEN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  // Rotate clockwise for 4 seconds
  digitalWrite(MotorIN1, HIGH);
  digitalWrite(MotorIN2, LOW);
  analogWrite(MotorEN, 255); // Max speed
  Serial.println("Clockwise");
  delay(4000);

  // Rotate counter-clockwise for 4 seconds
  digitalWrite(MotorIN1, LOW);
  digitalWrite(MotorIN2, HIGH);
  analogWrite(MotorEN, 255); // Max speed
  Serial.println("Counter-Clockwise");
  delay(4000);
}
