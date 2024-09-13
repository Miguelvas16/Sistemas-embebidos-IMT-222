#define PULS 2
#define PASO 1
#define MONITOR 9600
#define RESET 3
#define VALOR 0
unsigned int cont;
void setup() {
  Serial.begin(MONITOR);
  pinMode(PULS, INPUT_PULLUP);
  pinMode(RESET, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PULS), interrumpir, FALLING);
  attachInterrupt(digitalPinToInterrupt(RESET), reinicio, FALLING);
}
void loop() {
}
void interrumpir() {
  cont += PASO;
  Serial.println(cont);
}

void reinicio() {
  cont = VALOR;
  Serial.println(cont);
}