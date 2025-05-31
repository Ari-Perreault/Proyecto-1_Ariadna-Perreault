// Definiciones de pines
#define BOTON_PIN 11 
#define PARLANTE1_PIN 9 
#define PARLANTE2_PIN 10 

void setup() {
  pinMode(BOTON_PIN, INPUT_PULLUP); 
  pinMode(PARLANTE1_PIN, OUTPUT); 
  pinMode(PARLANTE2_PIN, OUTPUT); 
}

void loop() {
  
  int estadoBoton = digitalRead(BOTON_PIN);

  if (estadoBoton == LOW) {
    digitalWrite(PARLANTE1_PIN, HIGH); 
    delay(300); 
    digitalWrite(PARLANTE1_PIN, LOW); 
    
    digitalWrite(PARLANTE2_PIN, HIGH); 
    delay(300); 
    digitalWrite(PARLANTE2_PIN, LOW); 
  }
}