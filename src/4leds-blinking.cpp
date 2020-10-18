// #include <Arduino.h>

// #define LED1_PIN 6
// #define LED2_PIN 7
// #define LED3_PIN 12
// #define LED4_PIN 13
// #define DELAY_TIME 500
// #define PIN_ARRAY_SIZE 4

// int pinArray[PIN_ARRAY_SIZE] = { LED1_PIN, LED2_PIN, LED3_PIN, LED4_PIN };

// void setOutput(int pin){
//     pinMode(pin, OUTPUT);
//     digitalWrite(pin, LOW);
// }

// void setup() {
//   // put your setup code here, to run once:
//   for (int i = 0; i < PIN_ARRAY_SIZE; i++){
//     setOutput(pinArray[i]);
//   }
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   for (int i = 0; i < PIN_ARRAY_SIZE; i++){
//     // turn off previous led
//     if (i == 0){
//       // the last led is the previous led to the first led
//       digitalWrite(pinArray[PIN_ARRAY_SIZE - 1], LOW);
//     } else {
//       digitalWrite(pinArray[i - 1], LOW);
//     }
    
//     // turn on current led
//     digitalWrite(pinArray[i], HIGH);
//     delay(DELAY_TIME);
//   }
// }
