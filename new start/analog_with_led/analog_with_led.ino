void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
}

void loop() {
  for( int i=0;i<=255;i=i+20){
    analogWrite(3,i);
    delay(500);
  }
  // put your main code here, to run repeatedly:

}
