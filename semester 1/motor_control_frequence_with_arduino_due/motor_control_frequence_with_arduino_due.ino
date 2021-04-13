const int IN3 = A0;
const int IN4 = A1;
const int IN5 = A2;
const int IN6= A9;
const int IN7 = A8;
const int IN8= A10;
void setup() {
  Serial.begin(115200);
  pinMode (IN3, INPUT);
  pinMode (IN4, INPUT);
  pinMode (IN5, INPUT);
    pinMode (IN6, INPUT);
  //pinMode (ENB, OUTPUT);
  // put youA3setup code here, to run once:
}

void loop() {
  Serial.print(analogRead(IN3));
  Serial.print(",");
  Serial.print(analogRead(IN4));
  Serial.print(",");
  Serial.println(analogRead(IN5));
  delay(100);
  /*Serial.print("==");
  
  Serial.print(analogRead(IN6));
  Serial.print(",");
  Serial.print(analogRead(IN7));
  Serial.print(",");
  Serial.println(analogRead(IN8));
  delay(100);*/
  
  // put your main code here, to run repeatedly:

}




