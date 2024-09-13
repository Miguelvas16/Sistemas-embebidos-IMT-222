#define led 10
#define pot A0

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  int valorPotenciometro = analogRead(pot);
  int brillo = map(valorPotenciometro, 0, 1023, 0, 255);

  Serial.print("Valor del potenciómetro: ");
  Serial.print(valorPotenciometro);
  Serial.print(" | Brillo del LED: ");
  Serial.println(brillo);

  analogWrite(led, brillo);
  delay(10);
}
