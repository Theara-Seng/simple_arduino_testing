const int IN3 = 2;
const int IN4 = 3;





void setup() {

  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  //pinMode (ENB, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {

  //analogWrite(ENB , 225);
  

  analogWrite(IN3, 50);
  digitalWrite(IN4, LOW);
 
  
  // put your main code here, to run repeatedly:

}




