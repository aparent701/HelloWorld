#include <Arduino.h>
int pins[] = {
  0, 2, 4, 5, 12, 13, 14, 15, 16, 17, 
  18, 19, 21, 22, 23, 25, 26, 27, 32, 33
}; // GPIO sûrs à tester


void setup() {
  Serial.begin(115200);
     Serial.print( F("========== :") ); \
     Serial.print( F("  compiled :") ); \
          Serial.print( F(__DATE__) ); \
          Serial.print( F(",") );\
          Serial.print( F(__TIME__) ); \
          Serial.print( F(",") );\
          Serial.print( F(__FILE__) ); \
          Serial.println( F("========== :") );

     for (int i = 0; i < sizeof(pins)/sizeof(pins[0]); i++) {
    pinMode(pins[i], OUTPUT);
  
     }
    digitalWrite(2, LOW);
    delay(300);
    digitalWrite(2, HIGH);
    delay(300);
delay(3000);
    digitalWrite(2, LOW);
    delay(300);
    digitalWrite(2, HIGH);
    delay(300);


}
void loop() {
//  for (int i = 0; i < sizeof(pins)/sizeof(pins[0]); i++) {
//     int pin = pins[i];

//     Serial.print("Test GPIO ");
//     Serial.println(pin);

//     digitalWrite(pin, HIGH);
//     delay(300);
//     digitalWrite(pin, LOW);
//     delay(300);
  }

