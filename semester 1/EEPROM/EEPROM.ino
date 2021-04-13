#include <EEPROM.h>

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
EEPROM.put(0,"HELLO");
}

void loop() {
  // put your main code here, to run repeatedly:
String  x=EEPROM.get(0,"WORLD");
Serial.println(x);
delay(1000);
}
