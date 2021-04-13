int led[]={8,9,10,11};
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.setTimeout(100);
for(int i=0;i<=3;i++){
  pinMode(led[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  String x=Serial.readString();
 Serial.println(x);
  if (x=="forward"){
    digitalWrite(8,HIGH);
  }else if( x=="stop"){
    digitalWrite(8,LOW);
  }
//  else if (x=="led2"){
//    digitalWrite(9,HIGH);
//    
//  }
//  else if (x=="led3"){
//    digitalWrite(10,HIGH);
//  }
//  else if (x=="led4"){
//    digitalWrite(11,HIGH);
//  }
}
}
