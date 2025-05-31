#define BOTON_PIN 12
#define LED1 3
#define LED2 5
#define LED3 6

int ledActual = 1;  // LED actual que queda encendido
bool estadoAnteriorBoton = HIGH; 

void setup() {
  pinMode(BOTON_PIN, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
}

void loop() {
  int estadoBoton = digitalRead(BOTON_PIN);

  // Detectar si el botón fue presionado
  if (estadoBoton == LOW && estadoAnteriorBoton == HIGH) {
    delay(50); 
    ledActual++;

    
    if (ledActual > 3) {
      ledActual = 1;
    }
  }

  estadoAnteriorBoton = estadoBoton;

  if (estadoBoton == HIGH) {
    // Todos los LEDs encendidos
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
  } else
    
    if (ledActual == 1) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
    } else if (ledActual == 2) {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
    } else if (ledActual == 3) {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
    }
  }

