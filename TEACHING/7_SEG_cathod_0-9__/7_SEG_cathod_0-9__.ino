int x[10]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
void setup() {
  // put your setup code here, to run once:
for (int i=2;i<=8;i++){
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
//for (int k=9;k>=0;k--){
  for (int j=2;j<=8;j++){
    digitalWrite(j,bitRead(x[7],j-2));
  }
  delay(1000);
//}
}
