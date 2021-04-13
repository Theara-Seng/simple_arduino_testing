#include <LiquidCrystal.h>
LiquidCrystal thearalcd(8,9,4,5,6,7);
void setup() {
  
  // put your setup code here, to run once:
thearalcd.begin(12,2);


}

void loop() {
  for( int h=0;h<=11;h++){

    
    for(int m=0;m<=59;m++){
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
    
 
        delay(1000);
        //thearalcd.clear();
        
     
    }
  }

  }

}
