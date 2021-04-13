int forward;
int backward;
int turnleft;
int turnright;
int lastforward;
int lastbackward;
int lastturnleft;
int lastturnright;
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT_PULLUP);
pinMode(3,INPUT_PULLUP);
pinMode(4,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
Serial.begin(9600);
Serial.setTimeout(50);
}

void loop() {
  // put your main code here, to run repeatedly:
forward=digitalRead(2);
backward=digitalRead(3);
turnleft=digitalRead(4);
turnright=digitalRead(5);
if (forward!=lastforward){
if (forward==0){
  Serial.println("forward");
  
}else{
  Serial.println("stop");
}
}
else if (backward!=lastbackward){
  if(backward==0){
    Serial.println("backward");
    
  }
  else {
    Serial.println("stop");
  }
}
if (turnleft!=lastturnleft){
  if (turnleft==0){
    Serial.println("turnleft");
  }else{
    Serial.println("stop");
  }
}
if (turnright!=lastturnright){
  if(turnright==0){
    Serial.println("turnright");
  }else{
    Serial.println("stop");
  }
}
forward=lastforward;
backward=lastbackward;
turnleft=lastturnleft;
turnright=lastturnright;
}
