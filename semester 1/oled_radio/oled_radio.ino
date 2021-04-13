#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 myoled(13);
#include <Wire.h>
#include <TEA5767Radio.h>
 
TEA5767Radio radio = TEA5767Radio();


void setup() {
  // put your setup comde here, to run once:
myoled.begin(0x3C);
myoled.clearDisplay();
myoled.display();
myoled.setTextColor(WHITE);
 Wire.begin();
  radio.setFrequency(107.0); // pick your own frequency
  Serial.begin(9600);
  Serial.setTimeout(100);
}
void loop() {
  // put your main code here, to run repeatedly:
//myoled.setCursor(10,20);
        myoled.setCursor(1,56);
       myoled.print("MSN");
       myoled.setCursor(100,56);
       myoled.print("MENU");
        myoled.setCursor(30,39);
        myoled.print("22.04.2018");
      
        myoled.setCursor(30,30);
       if(Serial.available()>0){
      String band=Serial.readString();
      float freg=band.toFloat();
       radio.setFrequency(freg);
       myoled.clearDisplay();
       myoled.setTextSize(1);
   
       myoled.print(String("FM")+freg);
       }
        myoled.display();
     
      
}

