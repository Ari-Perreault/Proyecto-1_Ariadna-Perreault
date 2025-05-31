#define BOTON_PIN 12
#define COLOR_R 6
#define COLOR_B 9
#define COLOR_G 10

int ColorActual = 1;  // LED actual que queda encendido
bool estadoAnteriorBoton = HIGH; 

void setup() {
  pinMode(BOTON_PIN, INPUT_PULLUP);
  pinMode(COLOR_R, OUTPUT);
  pinMode(COLOR_B, OUTPUT);
  pinMode(COLOR_G, OUTPUT);

}

void loop() {
  int estadoBoton = digitalRead(BOTON_PIN);

  // Detectar si el botón fue presionado
  if (estadoBoton == LOW && estadoAnteriorBoton == HIGH) {
    delay(50); 
    ColorActual++;

    
    if (ColorActual > 7) {
      ColorActual = 1;
    }
  }

  estadoAnteriorBoton = estadoBoton;
    
    if (ColorActual == 1) {
      analogWrite(COLOR_R, 255);
      analogWrite(COLOR_B, 0);
      analogWrite(COLOR_G, 0);
    } else if (ColorActual == 2) {
      analogWrite(COLOR_R, 0);
      analogWrite(COLOR_B, 255);
      analogWrite(COLOR_G, 100);
    } else if (ColorActual == 3) {
      analogWrite(COLOR_R, 0);
      analogWrite(COLOR_B, 0);
      analogWrite(COLOR_G, 255);
    } else if (ColorActual == 4) {
      analogWrite(COLOR_R, 150);
      analogWrite(COLOR_B, 255);
      analogWrite(COLOR_G, 0);
    } else if (ColorActual == 5) {
      analogWrite(COLOR_R, 0);
      analogWrite(COLOR_B, 255);
      analogWrite(COLOR_G, 0);
    } else if (ColorActual == 6) {
      analogWrite(COLOR_R, 255);
      analogWrite(COLOR_B, 255);
      analogWrite(COLOR_G, 255);
    } else if (ColorActual == 7) {
      analogWrite(COLOR_R, 255);
      analogWrite(COLOR_B, 0);
      analogWrite(COLOR_G, 150);
    }
  }

