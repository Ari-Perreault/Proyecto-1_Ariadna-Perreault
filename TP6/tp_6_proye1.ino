#include <Adafruit_NeoPixel.h>

#define BOTON 2
#define POT A0
#define PIXEL_PIN 3
#define NUM_PIXELS 12

bool secuenciaActiva = false;
bool estadoAnteriorBoton = HIGH;

Adafruit_NeoPixel rings = Adafruit_NeoPixel(NUM_PIXELS, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(BOTON, INPUT_PULLUP);
  rings.begin();
  rings.show();
  Serial.begin(9600);
}

void loop() {
  bool estadoActualBoton = digitalRead(BOTON);

  if (estadoActualBoton == LOW && estadoAnteriorBoton == HIGH) {
    delay(50);
    if (digitalRead(BOTON) == LOW) {
      secuenciaActiva = !secuenciaActiva;
    }
  }
  estadoAnteriorBoton = estadoActualBoton;

  int potValue = analogRead(POT);
  int Tiempo = map(potValue, 0, 1023, 10, 500);
  Serial.print ("tiempo de parpadeo:");
  Serial.println(Tiempo);
  if (secuenciaActiva) {
    for (int i = 0; i < 10; i++) {
      if (!secuenciaActiva) {
        rings.clear();
        rings.show();
        break;
      }
      if ((i & 1) == 0) {
        rings.setPixelColor(0, rings.Color(255, 0, 0));
        rings.setPixelColor(2, rings.Color(255, 0, 0));
        rings.setPixelColor(4, rings.Color(255, 0, 0));
        rings.setPixelColor(6, rings.Color(255, 0, 0));
        rings.setPixelColor(8, rings.Color(255, 0, 0));
        rings.setPixelColor(10, rings.Color(255, 0, 0));
      } else {
        rings.setPixelColor(1, rings.Color(0, 255, 0));
        rings.setPixelColor(3, rings.Color(0, 255, 0));
        rings.setPixelColor(5, rings.Color(0, 255, 0));
        rings.setPixelColor(7, rings.Color(0, 255, 0));
        rings.setPixelColor(9, rings.Color(0, 255, 0));
        rings.setPixelColor(11, rings.Color(0, 255, 0));
      }
      rings.show();
      delay(Tiempo);
      rings.clear();
    }
  } else {
    rings.clear();
    rings.show();
  }
  delay(10);
}