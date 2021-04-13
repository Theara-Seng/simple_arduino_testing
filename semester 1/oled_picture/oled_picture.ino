#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 myoled(13);



void setup() {
  // put your setup comde here, to run once:
myoled.begin(0x3C);
myoled.clearDisplay();
myoled.setTextSize(1);
myoled.setTextColor(WHITE);
myoled.setCursor(10,30);
myoled.print("I miss you mitsuki");

myoled.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
