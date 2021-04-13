int x[10]={B1000000, B1111001,B0100100,B0110000,B11001,B10010,B10,B1111000,B0,B10000};
void setup() {
  // put your setup code here, to run once:
for (int i=2;i<=8;i++){
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for (int k=0;k<=9;k++){
  for (int j=2;j<=8;j++){
    digitalWrite(j,bitRead(x[k],j-2));
  }
  delay(1000);
}
}
