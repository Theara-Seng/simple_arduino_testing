int i=8;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
Serial.begin(9600);
pinMode(i,OUTPUT);
}

void loop() {
  // put your main code h-yere, to run repeatedly:
int x=analogRead(A0);
int y=0.25*x;
analogWrite(i,255-y);
Serial.println(y);

delay(500);
}
