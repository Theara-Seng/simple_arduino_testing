#include<Servo.h>
Servo monsterITC;

void setup() {
  // put your setup code here, to run once:
monsterITC.attach(9);
//monsterITC.write(servo_position);
}

void loop() {
  // put your main code here, to run repeatedly:
monsterITC.write(90);
}
