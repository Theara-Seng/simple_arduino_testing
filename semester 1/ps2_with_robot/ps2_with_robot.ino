#include <PS2X_lib.h>
#include <AFMotor.h>

PS2X ps2x;
AF_DCMotor motorA(1);
AF_DCMotor motorB(2);

int error = 0; 
byte type = 0;
byte vibrate = 0;


void setup() 
{
  motorA.setSpeed(1000);
  motorB.setSpeed(1000);
  
  error = ps2x.config_gamepad(A11,A9,A8,A10, true, true);  //(clock, command, attention, data)
}

void loop() 
{
  int temp;
  ps2x.read_gamepad(false, vibrate); 
  
  if(ps2x.Button(PSB_TRIANGLE))
  {
    temp = ps2x.Analog(PSAB_TRIANGLE), DEC;    
    motorA.run(FORWARD);
    motorB.run(FORWARD);
    motorA.setSpeed(temp);
    motorB.setSpeed(temp);
  }
  
  else if(ps2x.Button(PSB_CIRCLE))
  {
    temp = ps2x.Analog(PSAB_CIRCLE), DEC;
    motorA.run(FORWARD);
    motorB.run(BACKWARD);
    motorA.setSpeed(temp);
    motorB.setSpeed(temp);
  }
  
  else if(ps2x.Button(PSB_SQUARE))
  {
    temp = ps2x.Analog(PSAB_SQUARE), DEC;
    motorA.run(BACKWARD);
    motorB.run(FORWARD);
    motorA.setSpeed(temp);
    motorB.setSpeed(temp);    
  }
  
  else if(ps2x.Button(PSB_CROSS))
  {
    temp = ps2x.Analog(PSAB_CROSS), DEC;
    motorA.run(BACKWARD);
    motorB.run(BACKWARD);
    motorA.setSpeed(temp);
    motorB.setSpeed(temp); 
  }
  
  else
  {
    motorA.run(RELEASE);
    motorB.run(RELEASE);
  }
  
  delay(50);
}

