#include <PS2X_lib.h>
#include <AFMotor.h>

PS2X ps2x;
AF_DCMotor motorALeft(1);  //front motor left
AF_DCMotor motorARight(2); //front motor Right
AF_DCMotor motorBLeft(3);  //back motor Left
AF_DCMotor motorBRight(4); //back motor Right


int error = 0; 
byte type = 0;
byte vibrate = 0;


void setup() 
{
  motorALeft.setSpeed(250);
  motorARight.setSpeed(250);
  motorBLeft.setSpeed(250);
  motorBLeft.setSpeed(250);
  
  error = ps2x.config_gamepad(A11,A9,A8,A10, true, true);  //(clock, command, attention, data)
}

void loop() 
{
  int temp;
  ps2x.read_gamepad(false, vibrate); 
  
  if(ps2x.Button(PSB_TRIANGLE))
  {
    temp = ps2x.Analog(PSAB_TRIANGLE), DEC;    // robot run forward, if we use with PS2 i think it can reach 10m long so if we run it forward, it is such a good staff to do so
    motorALeft.run(FORWARD);
    motorARight.run(FORWARD);
    motorBLeft.run(FORWARD);
    motorBRight.run(FORWARD);
    motorALeft.setSpeed(temp);
    motorARight.setSpeed(temp);
    motorBLeft.setSpeed(temp);
    motorBRight.setSpeed(temp);
  }
  
  else if(ps2x.Button(PSB_CIRCLE))
  {
    temp = ps2x.Analog(PSAB_CIRCLE), DEC; //turn Right
    motorARight.run(FORWARD);
    motorALeft.run(BACKWARD);
    motorBRight.run(FORWARD);
    motorBLeft.run(BACKWARD);
    motorALeft.setSpeed(temp);
    motorARight.setSpeed(temp);
    motorBLeft.setSpeed(temp);
    motorBRight.setSpeed(temp);
  }
  
  else if(ps2x.Button(PSB_SQUARE))
  {
    temp = ps2x.Analog(PSAB_SQUARE), DEC;
     motorALeft.run(FORWARD);
    motorARight.run(BACKWARD);
    motorBLeft.run(FORWARD);
    motorBRight.run(BACKWARD);
    motorALeft.setSpeed(temp);
    motorARight.setSpeed(temp);
    motorBLeft.setSpeed(temp);
    motorBRight.setSpeed(temp);
  }
  
  else if(ps2x.Button(PSB_CROSS))
  {
    temp = ps2x.Analog(PSAB_CROSS), DEC;
    motorALeft.run(BACKWARD);
    motorARight.run(BACKWARD);
    motorBLeft.run(BACKWARD);
    motorBRight.run(BACKWARD);
    motorALeft.setSpeed(temp);
    motorARight.setSpeed(temp);
    motorBLeft.setSpeed(temp);
    motorBRight.setSpeed(temp);
  }
  
  else
  {
    motorALeft.run(RELEASE);
    motorARight.run(RELEASE);
    motorBLeft.run(RELEASE);
    motorBRight.run(RELEASE);
  }
  
  delay(50);
}


