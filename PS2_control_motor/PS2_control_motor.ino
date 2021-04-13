#include <PS2X_lib.h>  //for v1.6

PS2X ps2x;
int PS2 = 0; 
//int error = 0; 
//byte type = 0;
//byte vibrate = 0;


//const int in1 = 3;    // direction pin 1
//const int in2 = 4;    // direction pin 2
const int EN1=5 ;    
const int EN2=3;
const int EN3= 7;    
const int EN4=6;
const int EN5=9 ;    
const int EN6=8;
const int EN7=13 ;    
const int EN8=12;
int theara;           // forward speed 

void setup(){
  PS2 = ps2x.config_gamepad(37,33,35,31, true, true);   //Настройка выводов: (clock, command, attention, data, true, true)
//  pinMode(in1, OUTPUT);      // connection to L298n
//  pinMode(in2, OUTPUT);      // connection to L298n
  pinMode(EN1, OUTPUT);      // connection to L298n
  pinMode(EN2, OUTPUT);
  pinMode(EN3,OUTPUT);
  pinMode(EN4, OUTPUT);      // connection to L298n
  pinMode(EN5, OUTPUT);
  pinMode(EN6,OUTPUT);
  pinMode(EN7,OUTPUT);
  pinMode(EN8,OUTPUT);
}



void loop(){
  ps2x.read_gamepad();
  

  if (ps2x.Button(PSB_PAD_UP) ){
    theara= (ps2x.Analog(PSB_PAD_UP), DEC);
    analogWrite(EN1,255);
    analogWrite(EN2, 0);
    analogWrite(EN3,255);
    analogWrite(EN4, 0);
    analogWrite(EN5,255);
    analogWrite(EN6, 0);
    analogWrite(EN7,255);
    analogWrite(EN8, 0);
   
  //  analogWrite(enb,theara);
  }
  
else if (ps2x.Button(PSB_PAD_DOWN) ){
    theara = (ps2x.Analog(PSB_PAD_DOWN), DEC);
    analogWrite(EN1,0);
    analogWrite(EN2, 255);
    analogWrite(EN3,0);
    analogWrite(EN4, 255);
    analogWrite(EN5,0);
    analogWrite(EN6, 255);
    analogWrite(EN7,0);
    analogWrite(EN8, 255);
  }
  else if (ps2x.Button(PSB_PAD_RIGHT)) {
  theara=(ps2x.Analog(PSB_PAD_RIGHT),DEC);
  
   analogWrite(EN1,255);
    analogWrite(EN2, 0);
    analogWrite(EN3,0);
    analogWrite(EN4, 255);
    analogWrite(EN5,255);
    analogWrite(EN6, 0);
    analogWrite(EN7,0);
    analogWrite(EN8, 255);
  }
  else if (ps2x.Button(PSB_PAD_LEFT)){
  theara=(ps2x.Analog(PSB_PAD_LEFT),DEC);
  
     analogWrite(EN1,0);
    analogWrite(EN2, 255);
    analogWrite(EN3,255);
    analogWrite(EN4, 0);
    analogWrite(EN5,0);
    analogWrite(EN6, 255);
    analogWrite(EN7,255);
    analogWrite(EN8, 0);
  }else{
    analogWrite(EN1,0);
    analogWrite(EN2, 0);
    analogWrite(EN3,0);
    analogWrite(EN4, 0);
    analogWrite(EN5,0);
    analogWrite(EN6, 0);
    analogWrite(EN7,0);
    analogWrite(EN8, 0);
  }
  
  delay(100);

}    


