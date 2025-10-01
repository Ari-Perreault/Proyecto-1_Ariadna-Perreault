#define ledPin 13                   
int secuencia[] = {1, 0, 0, 1, 1, 0, 1, 1}; 
#define tiempo 500                  
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 8; i++) {             
    digitalWrite(ledPin, secuencia[i]);      delay(tiempo);
  } 
}

