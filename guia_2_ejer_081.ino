#define ledPin 13 
#define buttonPin 2 

int secuencia[5];   
int indice = 0;     

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000); 

  int estadoBoton = digitalRead(buttonPin);

  // guardar el dato(0 = no presionado, 1 = presionado)
  if (estadoBoton == LOW) {  
    secuencia[indice] = 1;
  } else {
    secuencia[indice] = 0;
  }

 
  digitalWrite(ledPin, LOW);
  delay(500);

  indice++;

  // cuando se completa la secuencia
  if (indice == 5) {
    Serial.println("secuencia recibida:");

    // mostrar vector por consola
    for (int i = 0; i < 5; i++) {
      Serial.print(secuencia[i]);
      Serial.print(" ");
    }
    Serial.println();

    // reiniciar
    indice = 0;
    for (int i = 0; i < 5; i++) {
      secuencia[i] = 0; 
    }
    Serial.println("vector reiniciado, nueva ronda");
    delay(5000);
  }
}
