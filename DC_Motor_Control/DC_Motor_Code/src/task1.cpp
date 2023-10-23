#include<Arduino.h>
const int pot_pin = A0;
const int motor_pin = 11;

int pot_value = 0;
int motor_value = 0;

void setup(){
    pinMode(pot_pin, INPUT);
    pinMode(motor_pin, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    pot_value = analogRead(pot_pin);
    motor_value = map(pot_value,0,1023,   0,255);
    analogWrite(motor_pin, motor_value);

    Serial.print("Speed: ");
    Serial.println(motor_value);
    delay(100);
}