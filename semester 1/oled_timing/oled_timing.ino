#include <Wire.h>
#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 oled(LED_BUILTIN);
int xc=63;
int yc=31;
int R=30;
int r1=27;
int rs=23;
int rm=18;
int rh=15;
float pha=PI/2;
void setup() {
  // put your setup code here, to run once:
oled.begin(0x3c);
oled.clearDisplay();
oled.display();
theara();
}

void loop() {

    for (long i=0;i<43200;i++){
      drawtick(rs,(i-1)*6,0);
       drawtick(rm,(i-1)*6/60,0);
       drawtick(rh,(i-1)*6/3600,0);
      drawtick(rs,i*6,1);
     
      drawtick(rm,i*6/60,1);
      
      drawtick(rh,i*6/3600,1);
   
     
   
   
      
    

 
 
     
    }
     delay(20);
  }

void theara(){
  oled.drawCircle(xc,yc,R,WHITE);
  oled.display();
  for(int deg=0;deg<=360;deg+=30){
    int x=xc+R*cos(deg*3.14/180);
    int y=yc-R*sin(deg*3.14/180);
    int x1=xc+r1*cos(deg*3.14/180);
    int y1=yc-r1*sin(deg*3.14/180);
    oled.drawLine(x,y,x1,y1,WHITE);
    
  }
   drawtick(rs,0,1);
   drawtick(rm,0,1);
   drawtick(rh,0,1);
    
   
}
void drawtick(float rr,float ang,int color){
     int xs=xc+rr*cos(-ang*3.14/180+pha);
    int ys=yc-rr*sin(-ang*3.14/180+pha);
    oled.drawLine(xc,yc,xs,ys,color);
  
   oled.display();
}

