#include <Arduino.h>

#define LED_PIN 11
#define TIME_INTERVAL 1000

// last time when updating
unsigned long previousTime = 0;
unsigned long currentTime;

int ledState = LOW;

int invertDigitalState(int *state)
{
    if (*state == LOW)
    {
         *state = HIGH;
    }
    else
    {
        *state = LOW;
    }

    return *state;
}

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    currentTime = millis();
    if (currentTime - previousTime > TIME_INTERVAL)
    {
        previousTime = currentTime;
        digitalWrite(LED_PIN, invertDigitalState(&ledState));
    }
}