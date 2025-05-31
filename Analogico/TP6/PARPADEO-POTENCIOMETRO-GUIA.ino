#define LED 2
#define POT_T A0

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValor = analogRead(POT_T);  
  int delayT = map(potValor, 0, 1023, 100, 10000);  

//monitor serial
  Serial.print("Potenciometro: ");
  Serial.print(potValor);
  Serial.print("  -  Delay: ");
  Serial.println(delayT);

//LED
  digitalWrite(LED, HIGH);
  delay(delayT);
  digitalWrite(LED, LOW);
  delay(delayT);
}
