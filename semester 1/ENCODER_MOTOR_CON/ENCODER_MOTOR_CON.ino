/*     Stepper Motor using a Rotary Encoder
 *      
 *  by Dejan Nedelkovski, www.HowToMechatronics.com
 *  
 */
 #include <LiquidCrystal.h> // includes the LiquidCrystal Library 
 LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // Creates an LC object. Parameters: (rs, enable, d4, d5, d6, d7) 
// defines pins numbers
 const int IN3= 17 ;
 const int IN4= 18;
 const int ENB=19;
 #define outputA 20
 #define outputB 21
 int counter = 0;
 int angle = 0; 
 int aState;
 int aLastState;  
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(IN3,OUTPUT); 
  pinMode(IN4,OUTPUT);
 pinMode(ENB,OUTPUT);
  pinMode (outputA,INPUT);
  pinMode (outputB,INPUT);
  
  aLastState = digitalRead(outputA);
  lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display } 
}
void loop() {
  aState = digitalRead(outputA);
  
  if (aState != aLastState){     
     if (digitalRead(outputB) != aState) { 
       counter ++;
       angle ++;
       rotateCW();  
     }
     else {
       counter--;
       angle --;
       rotateCCW(); 
     }
     if (counter >=30 ) {
      counter =0;
     }
     
     lcd.clear();
     lcd.print("Position: ");
     lcd.print(int(angle*(-1.8)));
     lcd.print("deg"); 
     lcd.setCursor(0,0);
     
   }
  aLastState = aState;
}
void rotateCW() {
  analogWrite(ENB,255);
  digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
    delayMicroseconds(2000);
    digitalWrite(IN4,LOW);
    delayMicroseconds(2000); 
}
void rotateCCW() {
  analogWrite(ENB,255);
  digitalWrite(IN3,HIGH);
    digitalWrite(IN4,HIGH);
    delayMicroseconds(2000);
    digitalWrite(IN4,LOW);
    delayMicroseconds(2000);   
}
