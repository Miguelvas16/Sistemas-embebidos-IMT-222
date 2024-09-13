#include <EEPROM.h>
#define botonAumentar 2
#define botonDisminuir 3
const int direccionEEPROM = 0;
const int volumenMinimo = 0;
const int volumenMaximo = 20;
int volumen = 0;
volatile unsigned long lastInterruptTime = 0;
volatile unsigned long deboucedelay = 80;

void setup() {
  pinMode(botonAumentar, INPUT_PULLUP);
  pinMode(botonDisminuir, INPUT_PULLUP);

  volumen = EEPROM.read(direccionEEPROM);

  volumen = constrain(volumen, volumenMinimo, volumenMaximo);

  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(botonAumentar), aumentar, FALLING);
  attachInterrupt(digitalPinToInterrupt(botonDisminuir), disminuir,FALLING);
}

void loop() {
    delay(5000);
 
  }

void aumentar(){
unsigned long interruptTime = millis();
  
  if (interruptTime - lastInterruptTime > deboucedelay) {
    if (volumen < volumenMaximo) {
      volumen++;
      EEPROM.write(direccionEEPROM, volumen);  
    }
  lastInterruptTime = interruptTime;
    Serial.print("Volumen: ");
  Serial.println(volumen);
  }
}
void disminuir(){
  unsigned long interruptTime = millis();

  if (interruptTime - lastInterruptTime > deboucedelay) {
    if (volumen > volumenMinimo) {
      volumen--;
      EEPROM.write(direccionEEPROM, volumen);  
  }
  lastInterruptTime = interruptTime;
    Serial.print("Volumen: ");
  Serial.println(volumen);
}
  delay(100);
}