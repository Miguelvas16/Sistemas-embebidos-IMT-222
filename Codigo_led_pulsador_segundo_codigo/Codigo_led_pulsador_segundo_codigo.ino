#define pulsador  8
#define led 13
void setup() {
  // put your setup code here, to run once:
pinMode(pulsador,INPUT);
pinMode(pulsador,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int entrada;
entrada=digitalRead(pulsador);
if(entrada==HIGH)
{
  digitalWrite(led,HIGH);
  
}
else
{
  digitalWrite(led,LOW);
}
delay(10);
}