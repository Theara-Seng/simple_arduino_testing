void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,LOW);
delayMicroseconds(2);
digitalWrite(2,HIGH);
delayMicroseconds(10);
int t=pulseIn(3,HIGH);
float x=0.034*t/2;//cm unit
Serial.println(x);
delay(500);
}
