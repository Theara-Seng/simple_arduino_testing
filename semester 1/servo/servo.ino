#include<Servo.h>
Servo servo1;
Servo servo2;
int joyval;
int joyx=0;
int joyy=1;
void setup() {
  // put your setup code here, to run once:
servo1.attach(3);
servo2.attach(5);

}

void loop() {
 joyval=analogRead(joyx);
joyval=map(joyval,0,1023,0,180);
servo1.write(joyval);
joyval=analogRead(joyy);
joyval=map(joyval,0,1023,0,180);
servo2.write(joyval);
delay(15);
}
