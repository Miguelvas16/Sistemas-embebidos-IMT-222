#define pulsador  8
#define led 13
#define potenciometro A0
void setup() {
pinMode(pulsador,INPUT);
pinMode(pulsador,OUTPUT);
pinMode(potenciometro, INPUT);
  Serial.begin(9600); 

}

void loop() {
int entrada;
int valorPotenciometro = analogRead(potenciometro);  
int brillo = map(valorPotenciometro, 0, 1023, 0, 255);

  Serial.print("Valor del potenciómetro: ");
  Serial.print(valorPotenciometro);
  Serial.print(" | Brillo del LED: ");
  Serial.println(brillo);
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
