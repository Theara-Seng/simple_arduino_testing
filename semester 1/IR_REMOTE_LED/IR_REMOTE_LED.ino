#include <IRremote.h>

int RECV_PIN = 13;
IRrecv irrecv(RECV_PIN);
decode_results results;

#define BUTTON_CH- 0xFFA25D
#define BUTTON_CH 0xFF629D
#define BUTTON_0 0xFF6887
#define BUTTON_1 0xFF30CF
#define BUTTON_2 0xFF18E7
#define BUTTON_3 0xFF7A85
#define BUTTON_4 0xFF10EF
#define BUTTON_5 0xFF38C7
#define BUTTON_6 0xFF5AA5
#define BUTTON_7 0xFF42BD
#define BUTTON_8 0xFF4AB5
#define BUTTON_9 0xFF52AD
#define BUTTON_10 0xFF22DD
#define BUTTON_11 0xFF02FD
#define BUTTON_12 0xFFC23D
#define BUTTON_13 0xFFE01F
#define BUTTON_14 0xFFA857

void setup()
{
  for(int i=0;i<=12;i++){
    pinMode(i,OUTPUT);
  }
  
  irrecv.enableIRIn();
}
void loop() {

  if (irrecv.decode(&results))
  {
    if (results.value == BUTTON_12 ){
      digitalWrite(0, HIGH);
    }
    if (results.value == BUTTON_CH)
    {
      digitalWrite(1, HIGH);
    
    }
     if (results.value == BUTTON_0)
    {
      digitalWrite(2, HIGH);
    
    }
    if (results.value == BUTTON_1)
    {
      digitalWrite(3, HIGH);
    }
    if (results.value == BUTTON_2)
    {
      digitalWrite(4, HIGH);
    }
    if (results.value == BUTTON_3)
    {
      digitalWrite(5, HIGH);
    }
    if (results.value == BUTTON_4)
    {
      digitalWrite(6, HIGH);
    }
    if (results.value == BUTTON_5)
    {
      digitalWrite(7, HIGH);
    }
    if (results.value == BUTTON_6)
    {
      digitalWrite(8, HIGH);
    }
    if (results.value == BUTTON_7)
    {
      digitalWrite(9, HIGH);
    }
    if (results.value == BUTTON_8)
    {
      digitalWrite(10, HIGH);
    }
    if (results.value == BUTTON_9)
    {
      digitalWrite(11, HIGH);
    }
    if (results.value == BUTTON_10)
    {
      digitalWrite(12, HIGH);
    }
    if (results.value == BUTTON_14)
    {
       for(int i=0;i<=12;i++){
      
      
      digitalWrite(i, HIGH);
      }
    }
    if (results.value == BUTTON_13)
    {
      for(int i=0;i<=12;i++){
      
      
      digitalWrite(i, LOW);
      }
    }
    
    irrecv.resume();
  }
}


