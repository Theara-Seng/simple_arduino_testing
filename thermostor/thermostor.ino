const float T0=298.15;// 273K+25
const float R0=10000; //ROOM Resistor
const float belta=3950;
const float r=10000;
float val;
float R,vol,T;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // puti your main code here, to run repeatedly:
val=analogRead(A0);
vol=(val*5)/1023; //voltage of thermostor   val * 0.0049
R=(r*(5-vol))/vol;
T=(T0*belta)/ (belta+(T0*log(R/R0)));
Serial.println(T-273);
delay(500);
 
}
