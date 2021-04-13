const int potPin = A0;
const int buttonPin = 13;
const int forward1 = 5;
const int forward2 = 4;
const int backward1 = 3;
const int backward2 = 2;
int potValue = 0;
int motorValue = 0;
int buttonState = 0;

void setup() 
{
 
 pinMode(buttonPin, INPUT);
 pinMode (forward1, OUTPUT);
 pinMode (forward2, OUTPUT);
 pinMode (backward1, OUTPUT);
 pinMode (backward2, OUTPUT);
Serial.begin(9600);
}

void loop() 
{
 
 potValue = analogRead(potPin);  
 motorValue = map(potValue, 0, 1023, 0, 255);
 buttonState = digitalRead(buttonPin);
 Serial.println(analogRead(potPin));
 if (buttonState == LOW) 
  {
  
   analogWrite(backward1, motorValue);
   digitalWrite (backward2, HIGH);  
   digitalWrite (forward1, LOW);
   digitalWrite (forward2, LOW);    
  
  }
 
 else 
  {
   
   analogWrite(forward1, motorValue);
   digitalWrite (forward2, HIGH);
   digitalWrite (backward1, LOW);
   digitalWrite (backward2, LOW);
  
  }
  
}
