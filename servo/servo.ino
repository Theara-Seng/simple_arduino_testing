#include <Servo.h>
Servo m1;
void setup() {
  //m put your 180; code here, to run once:
m1.attach(9);

}
void loop() {
  // put your main code here, to run repeatedly:
//for( int i=180;i>=0;i--){ 
       m1.write(100);
     
//}
}
