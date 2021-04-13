#include <IRremote.h>
#include <IRremoteInt.h>
IRrecv myIR(11);
decode_results myresults;
const int IN3 = 4;
const int IN4 = 5;
const int IN1=2;
const int IN2=3;
const int ENA=9;
const int ENB=10;


void setup() {
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
Serial.begin(9600);
myIR.enableIRIn();
}
void loop() {

  // put your main code here, to run repeatedly:
if (myIR.decode(&myresults)){
  Serial.println(myresults.value,HEX);
 long x=myresults.value;
 if (x==0xE0E006F9){
  analogWrite(ENB , 100);
  analogWrite(ENA, 100);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4, LOW);
 }
 else if (x==0xE0E0A659){
  analogWrite(ENB , 100);
  analogWrite(ENA, 225);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4, LOW);
 }
 else if(x==0xE0E046B9){
    analogWrite(ENB , 225);
  analogWrite(ENA, 100);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4, LOW);
 }
 else if (x==0xE0E08679){
    analogWrite(ENB , 225);
  analogWrite(ENA, 225);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4, HIGH);
 
 }
 else if(x==0xE0E020DF){
  analogWrite(ENB , 225);
  analogWrite(ENA, 225);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4, LOW);
 }

 
myIR.resume();

}
}


