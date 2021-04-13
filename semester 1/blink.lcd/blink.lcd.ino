#include <LiquidCrystal.h>
LiquidCrystal thearalcd(8,9,4,5,6,7);

void setup() {
  // put your setup code here, to run once:
thearalcd.begin(16,2);
//thearalcd.setCursor(3,0);
//thearalcd.print("I miss you ");
//thearalcd.setCursor(4,1);
//thearalcd.print("MITSUKI");
thearalcd.print("starting in ");

}

void loop() {
  // put your main code here, to run repeatedly:
thearalcd.setCursor(0,1);
thearalcd.print("cursor blink");
thearalcd.blink();
delay(2000);
thearalcd.noBlink();
thearalcd.print("no blink");
delay(2000);
thearalcd.clear();
thearalcd.print("display off");
delay(1000);
thearalcd.noDisplay();
delay(2000);
thearalcd.display();
thearalcd.setCursor(0,0);
thearalcd.print("MITSUKI");
displayBlink(2,250);
displayBlink(2,500);
thearalcd.clear();
}
void displayBlink(int blinks, int duration){
  while(blinks--){
    thearalcd.noDisplay();
    delay(duration);
    thearalcd.display();
    delay(duration);
  }
}

