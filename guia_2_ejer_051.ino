#define ledPin1 12
#define ledPin2 13
int secuencia1[] = {1, 0, 0, 1, 0, 1, 1, 1};
int secuencia2[] = {0, 1, 0, 0, 1, 0, 0, 1};
#define tiempo 500

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPin1, secuencia1[i]);
    digitalWrite(ledPin2, secuencia2[i]);
    delay(tiempo);
  }
}

