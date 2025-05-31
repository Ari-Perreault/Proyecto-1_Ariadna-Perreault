#define BUZZER 9
#define POT A0

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int potValue = analogRead(POT);
  int frecuencia = map(potValue, 0, 1023, 100, 2000);
  tone(BUZZER, frecuencia);
  delay(10);
}