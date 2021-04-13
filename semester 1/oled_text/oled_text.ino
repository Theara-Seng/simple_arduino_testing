#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 myoled(13);



void setup() {
  // put your setup comde here, to run once:
myoled.begin(0x3C);
myoled.clearDisplay();
myoled.setTextSize(2);
myoled.setTextColor(WHITE);

}
void loop() {
  // put your main code here, to run repeatedly:
//myoled.setCursor(10,20);
for( int h=0;h<=11;h++){

    
    for(int m=0;m<=59;m++){
      for(int s=0;s<=59;s++){
        myoled.setCursor(20,20);
       myoled.print("HH:MM:SS");
        myoled.setCursor(20,50);
           if (h<10){
      myoled.print(0);
          
      }
        myoled.print(h);
  
        myoled.print(":");
         if(m<10){
         myoled.print(0);
        }
       myoled.print(m);
       
        myoled.print(":");
            if(s<10){
          myoled.print(0);
       }
       myoled.print(s);
    
         myoled.display();
        delay(1000);
        myoled.clearDisplay();
        //thearalcd.clear();
       // 
      }    
      } 
}
}
