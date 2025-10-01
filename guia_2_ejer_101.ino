#define BUZZER 8   

int numeros[10];   

void setup() {
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);

  randomSeed(analogRead(0)); 
}

void loop() {
  // Generar los 10 números aleatorios
  for (int i = 0; i < 10; i++) {
    numeros[i] = random(1, 11); 
    Serial.print("numero ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(numeros[i]);

   
    if (numeros[i] == 5) {
      tone(BUZZER, 1000, 300);
      delay(350);              
    } else {
      delay(200);           
    }
  }

  Serial.println("---- fin de la serie ----");
  delay(3000); 
}
