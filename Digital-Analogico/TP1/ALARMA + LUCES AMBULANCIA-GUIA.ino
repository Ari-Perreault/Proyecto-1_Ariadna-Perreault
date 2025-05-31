#define LED1 3
#define LED2 9
#define BUZZER 11

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
// Luz 1 y primer sonido
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  tone(BUZZER, 600); 
  delay(600);        

// Luz 2 y segundo sonido
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  tone(BUZZER, 900); 
  delay(600);        

// Reinicio
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  noTone(BUZZER);
  delay(400);       
}