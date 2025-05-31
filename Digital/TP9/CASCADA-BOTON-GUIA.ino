#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4
#define LED5 5
#define LED6 6
#define LED7 7
#define LED8 8
#define LED9 9
#define LED10 10

#define BOTON 13

bool pausa = false;
bool botonPresionado = false;
int ledActual = 1;

void setup() {
  pinMode(BOTON, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
}

void loop() {
  // Detectar botón presionado
  if (digitalRead(BOTON) == LOW && !botonPresionado) {
    pausa = !pausa;             
    botonPresionado = true;     
    delay(200);                 
  }

  // Detectar que se soltó el botón
  if (digitalRead(BOTON) == HIGH) {
    botonPresionado = false;
  }

 
  if (!pausa) {
    // Apagar 
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
    digitalWrite(LED8, LOW);
    digitalWrite(LED9, LOW);
    digitalWrite(LED10, LOW);

    // Encender el LED actual
    if (ledActual == 1) digitalWrite(LED1, HIGH);
    if (ledActual == 2) digitalWrite(LED2, HIGH);
    if (ledActual == 3) digitalWrite(LED3, HIGH);
    if (ledActual == 4) digitalWrite(LED4, HIGH);
    if (ledActual == 5) digitalWrite(LED5, HIGH);
    if (ledActual == 6) digitalWrite(LED6, HIGH);
    if (ledActual == 7) digitalWrite(LED7, HIGH);
    if (ledActual == 8) digitalWrite(LED8, HIGH);
    if (ledActual == 9) digitalWrite(LED9, HIGH);
    if (ledActual == 10) digitalWrite(LED10, HIGH);

    // Avanzar al siguiente LED
    ledActual++;
    if (ledActual > 10) ledActual = 1;

    delay(200);  // Pausa entre LEDs
  }
}