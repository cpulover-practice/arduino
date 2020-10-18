// #include <Arduino.h>
// #include "helper-functions.cpp"

// typedef struct Led
// {
//     int pin;
//     unsigned long previousUpdateTime;
//     int state;
//     int timeInterval;
// } Led;

// #define LED_ARRAY_SIZE 3
// Led led1 = {6, 0, LOW, 2000};
// Led led2 = {11, 0, LOW, 1000};
// Led led3 = {3, 0, LOW, 500};
// Led ledArray[LED_ARRAY_SIZE] = {led1, led2, led3};

// void setup()
// {
//     // init led mode and state
//     for (int i = 0; i < LED_ARRAY_SIZE; i++)
//     {
//         pinMode(ledArray[i].pin, OUTPUT);
//         digitalWrite(ledArray[i].pin, ledArray[i].state);
//     }
// }

// void loop()
// {
//     unsigned long currentTime = millis();
//     for (int i = 0; i < LED_ARRAY_SIZE; i++)
//     {
//         if (currentTime - ledArray[i].previousUpdateTime > ledArray[i].timeInterval)
//         {
//             ledArray[i].previousUpdateTime = currentTime;
//             digitalWrite(ledArray[i].pin, invertDigitalState(&(ledArray[i].state)));
//         }
//     }
// }