#include <LiquidCrystal.h>
LiquidCrystal thearalcd(8,9,4,5,6,7);
int x=3;
  int y=58;
void setup() {
    
  // put your setup code here, to run once:
thearalcd.begin(12,2);


}

void loop() {

  for( int h=x;h<=11;h++){

    if (h==11){
      x=0;
    }
    for(int m=y;m<=59;m++){
      if (m==59){
        y=0;
      }
      for(int s=0;s<=59;s++){
        thearalcd.setCursor(4,0);
        thearalcd.print("HH:MM:SS");
        thearalcd.setCursor(4,1);
           if (h<10){
      thearalcd.print(0);
          
      }
        thearalcd.print(h);
  
        thearalcd.print(":");
         if(m<10){
          thearalcd.print(0);
        }
        thearalcd.print(m);
       
        thearalcd.print(":");
            if(s<10){
          thearalcd.print(0);
        }
        thearalcd.print(s);
    
 
        delay(100);
        //thearalcd.clear();
        
     
    }
  }

  }

}

