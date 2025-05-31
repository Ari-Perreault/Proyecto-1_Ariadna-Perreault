#define R 9
#define G 11
#define B 10

//potenciómetros
#define POT_R A1
#define POT_B A2
#define POT_G A3


void setup() {
  
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
  int valorRojo = analogRead(POT_R);
  int valorAzul = analogRead(POT_B);
  int valorVerde = analogRead(POT_G);

  int rojo = valorRojo * 255 / 1023;
  int azul = valorAzul * 255 / 1023;
  int verde = valorVerde * 255 / 1023;

  //monitor serial
  Serial.print("R: ");
  Serial.println(rojo);
  Serial.print("G: ");
  Serial.println(verde);
  Serial.print("B: ");
  Serial.println(azul);
  Serial.println("-------------");

  // Control de los LEDs y el buzzer
  analogWrite(R, rojo);
  analogWrite(G, verde);
  analogWrite(B, azul);
}