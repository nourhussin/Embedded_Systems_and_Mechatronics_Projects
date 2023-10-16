#include<Arduino.h>
#define RED_LED 11
#define YELLOW_LED 12
#define GREEN_LED 13
#define PUSH_BUTTON A0
#define P 5
#define MAX_DELAY 5000

int number_of_cars;
unsigned long lastCarTime = 0; // Keep track of the last car time

void setup()
{
    pinMode(RED_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
    pinMode(PUSH_BUTTON, INPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, HIGH);
    
    int button_state = digitalRead(PUSH_BUTTON);

    if (button_state == HIGH && millis() - lastCarTime >= 500) {
        // Only consider a button press if more than 0.5 second has passed since the last one
        lastCarTime = millis(); // Update the last car time
        number_of_cars++;
        Serial.print("Car Detected. Total Cars: ");
        Serial.println(number_of_cars);
    }

    // Check if no cars have been detected for the specified timeout
    if (millis() - lastCarTime >= MAX_DELAY && number_of_cars>5) {
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(YELLOW_LED, HIGH);
        digitalWrite(RED_LED, LOW);
        delay(1000);

        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(YELLOW_LED, LOW);
        digitalWrite(RED_LED, LOW);
        delay(100 * P * number_of_cars);
        Serial.println("Done!");
        number_of_cars = 0; 
      	lastCarTime += MAX_DELAY;
    }
}
