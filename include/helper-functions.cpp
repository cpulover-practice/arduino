#include <Arduino.h>

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