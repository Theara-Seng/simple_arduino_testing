#include <Keypad.h>

const byte ROWS=4;
const byte COLS=4;
char keys[ROWS][COLS]={
  { '1','2','3','4'},
  {'5','6','7','8'},
  {'9','*','%','+'},
  {'A','B','C','D'}
};
byte rowpin[ROWS]={53,52,51,50};
byte colspin[COLS]={49,48,47,46};
Keypad keypad=Keypad(makeKeymap(keys),rowpin,colspin,ROWS,COLS);
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(13,OUTPUT);
}

void loop() {
  char key = keypad.getKey();

  if (key != NO_KEY){
    Serial.println(key);
  }
}
