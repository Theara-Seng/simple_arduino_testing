//#include <Key.h>
#include <Keypad.h>
int led=10;
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
{'1','2','3','*'},
{'4','5','6','/'},
{'7','8','9','+'},
{'*','0','#','-'}
};
byte rowPins[ROWS] = {9,8,7,6};
byte colPins[COLS] = {5,4,3,2};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char key = keypad.getKey();
  if (key){
    Serial.println(key);
    if (key=='1'){
      digitalWrite(led,HIGH);
    }
    else if (key=='2'){
      digitalWrite(led,LOW);
    }
    
  }

}
