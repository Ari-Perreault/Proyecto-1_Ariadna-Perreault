#define TMP A2
#define LUZ 6
#define R 11
#define G 9
#define B 10

void setup()
{
  pinMode(TMP, INPUT);
  pinMode(LUZ, INPUT);

  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  bool luz = digitalRead(LUZ);
  int temp = analogRead(TMP);
  float volt = temp * 5.0 / 1024;
  float tempC = volt * 100 - 50;

  Serial.print("El nivel de luz actual es: ");
  Serial.print(luz);
  Serial.print(" y la temperatura actual: ");
  Serial.print(tempC);
  Serial.println(" c");

  if (tempC > 90) {
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
  }
  else if (tempC > 18) {
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
  }
  else if (tempC < 18) {
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
  }
}
