#include <LiquidCrystal.h>
LiquidCrystal chendalcd(8,9,4,5,6,7); //RS,E/DB4,DB5,DB6,DB7

void setup() {
  chendalcd.begin(16,2);
  chendalcd.print("I miss you MITSUKI! ");
  chendalcd.setCursor(1,1); //coloum 4 row 2
  chendalcd.print("do you miss me like I miss you?");
  }
void loop() {
 
 chendalcd.scrollDisplayLeft();
 delay(1000);
//chendalcd.scrollDisplayRight();
//delay(100);
}
