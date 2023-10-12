#include<Arduino.h>
#define RED_LED 11
#define YELLOW_LED 12
#define GREEN_LED 13
#define PUSH_BUTTON A0
#define P 5
#define X 10

byte number_of_cars, button_state, last_button_state;
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
    button_state = digitalRead(PUSH_BUTTON);
    if(button_state != last_button_state)
    {
        if(button_state == HIGH)
        {
            number_of_cars++;
			      Serial.print("number of cars:  ");
      		  Serial.println(number_of_cars);
        }
    }
    last_button_state = button_state;

    if(number_of_cars < X)
    {
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(YELLOW_LED, LOW);
        digitalWrite(RED_LED, HIGH);
    }
    else
    {
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(YELLOW_LED, HIGH);
        digitalWrite(RED_LED, LOW);
        delay(2000);

        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(YELLOW_LED, LOW);
        digitalWrite(RED_LED, LOW);
        delay(100*P*number_of_cars);
      	Serial.println("Done! ");
        number_of_cars = 0;
    }
}