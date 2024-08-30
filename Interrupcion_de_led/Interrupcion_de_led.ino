#define pulsador  2
#define led1 13
#define led2 12
#define time 5000
bool flag=false;
void setup() {
  
pinMode(led1,OUTPUT);
pinMode(led1,OUTPUT);
pinMode(pulsador,INPUT);
  attachInterrupt(digitalPinToInterrupt(pulsador),interrumpir,FALLING);
}

void loop() {
  
  digitalWrite(led1,1);
  delay(time);
  digitalWrite(led1,0);
  delay(time);
}
void interrumpir(){
	flag!=flag;
  digitalWrite(led2,1);
}
