#include <Arduino.h>
#include "helper-functions.cpp"

typedef struct Led
{
    const int pin;
    int state;
} Led;

#define LED_ARRAY_SIZE 3
#define LED1_BLINK_INTERVAL 500
unsigned long previousTimeLed1 = 0;
Led led1 = {13, LOW}; // blink every interval seconds
Led led2 = {12, LOW}; // turn on when pressing button
Led led3 = {11, LOW}; // brightness ~ potentiometer value
Led ledArray[LED_ARRAY_SIZE] = {led1, led2, led3};

#define BUTTON_PIN 2
#define POTENTIOMETER_PIN A0 //auto INPUT

void setup()
{
    Serial.begin(9600);

    // init modes and states
    for (int i = 0; i < LED_ARRAY_SIZE; i++)
    {
        pinMode(ledArray[i].pin, OUTPUT);
        digitalWrite(ledArray[i].pin, ledArray[i].state);
    }

    pinMode(BUTTON_PIN, INPUT);
}

void loop()
{
    unsigned long currentTime = millis();
    if (currentTime - previousTimeLed1 > LED1_BLINK_INTERVAL)
    {
        previousTimeLed1 = currentTime;
        digitalWrite(led1.pin, invertDigitalState(&(led1.state)));
    }

    digitalWrite(led2.pin, digitalRead(BUTTON_PIN));

    Serial.println(analogRead(POTENTIOMETER_PIN));
    delay(1000);
}