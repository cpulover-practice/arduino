// #include <Arduino.h>
// #include "helper-functions.cpp"

// #define LED_PIN 11
// #define TIME_INTERVAL 500

// // last time when updating
// unsigned long previousTime = 0;
// unsigned long currentTime;

// int ledState = LOW;

// void setup()
// {
//     Serial.begin(9600);
// }

// void loop()
// {
//     currentTime = millis();
//     if (currentTime - previousTime > TIME_INTERVAL)
//     {
//         previousTime = currentTime;
//         digitalWrite(LED_PIN, invertDigitalState(&ledState));
//     }
// }