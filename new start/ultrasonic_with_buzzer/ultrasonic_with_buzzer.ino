void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,INPUT);
pinMode(8,OUTPUT);
Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,LOW);
delayMicroseconds(2);
digitalWrite(2,HIGH);
delayMicroseconds(10);
int t=pulseIn(3,HIGH);
int x=0.034*t/2;//cm unit


if (x<=10){
  Serial.println("door open");
  Serial.print("x=");
  Serial.println(x);
  digitalWrite(8,HIGH);
  delay(500);
}
else{
  Serial.println(x);
  digitalWrite(8,LOW);
  delay(500);
}

