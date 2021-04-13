#include <IRremote.h>
#include <IRremoteInt.h>
IRrecv myIR(11);
decode_results myresults;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
myIR.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
if (myIR.decode(&myresults)){
  Serial.println(myresults.value,HEX);
  long x=myresults.value;
  if (x==0x38863BE0){
 digitalWrite(13,HIGH);
  }
 else if (x==0x38863BD0){
  digitalWrite(13,LOW);
  
 }
 


myIR.resume();

}
}
