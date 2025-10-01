int numeros[] = {2, 6, 10, 11};  
int tam = 4; 
void setup() {
  Serial.begin(9600); 
  
  // Recorrer cada número del vector
  for (int i = 0; i < tam; i++) {
    Serial.print("Multiplos de ");
    Serial.println(numeros[i]);

    // Imprimir los primeros 5 múltiplos
    for (int j = 1; j <= 5; j++) {
      Serial.println(numeros[i] * j);
    }
    Serial.println("-----"); 
  }
}

void loop() {
 
}
