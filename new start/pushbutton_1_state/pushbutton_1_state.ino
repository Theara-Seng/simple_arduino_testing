int led=13;
int pushbutton=2;
boolean lastbutton=LOW;
boolean currentbutton=LOW;
boolean ledon=false;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(pushbutton,INPUT);
}
boolean debounce(boolean last){
  boolean current=digitalRead(pushbutton);
  if (last!=current){
    delay(5);
    current=digitalRead(pushbutton);
  }
  return current;
}
void loop() {
  // put your main code here, to run repeatedly:
  currentbutton=debounce(lastbutton);
if(lastbutton==LOW&&currentbutton==HIGH){
 ledon=!ledon;
}
  lastbutton=currentbutton;
  digitalWrite(led,ledon);
}
