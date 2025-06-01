#define BOT 2
#define POT A0
#define LEDR 9
#define LEDG 10
#define LEDB 11

bool estadoLED = false; 
int estadoBoton = LOW;
int ultimoEstadoBoton = LOW;

void setup() {
  pinMode(BOT, INPUT_PULLUP); 
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);

}

void loop() {
  estadoBoton = digitalRead(BOT);

  
  if (estadoBoton == LOW && ultimoEstadoBoton == HIGH) {
    delay(50); 
    if (digitalRead(BOT) == LOW) {
      estadoLED = !estadoLED;
    }
  }
  ultimoEstadoBoton = estadoBoton;

  if (estadoLED) {
    int valorPot = analogRead(POT);

    // Ajuste de colores
    int rojo = map(valorPot, 0, 1023, 0, 255);
    int verde = map(valorPot, 0, 1023, 255, 0);
    int azul = map(valorPot, 0, 1023, 150, 255);

    analogWrite(LEDR, rojo);
    analogWrite(LEDG, verde);
    analogWrite(LEDB, azul);
  } else {
    // Apagar el LED
    analogWrite(LEDR, 0);
    analogWrite(LEDG, 0);
    analogWrite(LEDB, 0);
  }
}
