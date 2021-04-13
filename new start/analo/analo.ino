
void setup() {
  for(int i=2;i<=10;i++){
    pinMode(i,OUTPUT);
  }
}
void loop() {
  setColor1(255, 0, 0); 
  setColor2(255,0,0);
  setColor3(255,0,0);
  delay(1000);
  setColor1(0, 255, 0); 
    setColor2(0, 255, 0); 
      setColor3(0, 255, 0); 
  delay(1000);
  setColor1(0, 0, 255); 
  setColor2(0, 0, 255); 
  setColor3(0, 0, 255); 
  delay(1000);
  setColor1(255, 255, 255); 
    setColor2(255, 255, 255);
      setColor3(255, 255, 255);
  delay(1000);
  setColor1(170, 0, 255); 
  setColor2(170, 0, 255); 
  setColor3(170, 0, 255); 
  delay(1000);
  setColor1(255,255,0);
  setColor2(255,255,0);
  setColor3(255,255,0);
  delay(1000);
  setColor1(155,155,188);
  setColor2(155,155,188);
  setColor3(155,155,188);
  delay(1000);
  setColor1(100,0,99);
  setColor2(100,0,99);
  setColor3(3100,0,99);
  delay(1000);
  setColor1(204,0,204);
  setColor2(204,0,204);
  setColor3(204,0,204);
  delay(1000);
  
}
void setColor1(int r1, int g1, int b1) {
  analogWrite(2, r1);
  analogWrite(3, g1);
  analogWrite(4, b1);
}
void setColor2( int r2, int g2, int b2){
  analogWrite(5,r2);
  analogWrite(6,g2);
  analogWrite(7,b2);
}
void setColor3( int r3, int g3, int b3){
  analogWrite(8,r3);
  analogWrite(9,g3);
  analogWrite(10,b3);
}

