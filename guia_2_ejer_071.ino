int leds[] = {2, 3, 4, 5, 6};
int cantidad = 5;

void setup() {
  for (int i = 0; i < cantidad; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < cantidad; i++) {
    digitalWrite(leds[i], HIGH);  
    delay(300);
    digitalWrite(leds[i], LOW);   
    delay(300);
  }
}
