// Definición de LEDs
#define R 9
#define G 11
#define B 10

#define R2 2
#define G2 7
#define B2 4

#define R3 3
#define G3 6
#define B3 5

// Definición de potenciómetros
#define POT_T A0
#define POT_R A1
#define POT_B A2
#define POT_G A3

// Definición del buzzer
#define BUZZER 12

void setup() {
  // Configuración de LEDs
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  pinMode(R2, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(B2, OUTPUT);

  pinMode(R3, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(B3, OUTPUT);

  // Configuración del buzzer
  pinMode(BUZZER, OUTPUT);

  // Inicialización de la comunicación serial
  Serial.begin(9600);
}

void loop() {
  // Lectura de los valores de los potenciómetros
  int valorTiempo = analogRead(POT_T);
  int valorRojo = analogRead(POT_R);
  int valorAzul = analogRead(POT_B);
  int valorVerde = analogRead(POT_G);

  // Cálculo de valores escalados
  long espera_long = (long)valorTiempo * 3000 / 1023;
  int espera = (int)espera_long;
  float tiempoSegundos = espera / 1000.0;

  long rojo_long = (long)valorRojo * 255 / 1023;
  int rojo = (int)rojo_long;
  long azul_long = (long)valorAzul * 255 / 1023;
  int azul = (int)azul_long;
  long verde_long = (long)valorVerde * 255 / 1023;
  int verde = (int)verde_long;

  // Impresión de valores por serial
  Serial.print("Tiempo: ");
  Serial.println(tiempoSegundos);
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
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
  delay(espera);
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 0);

  analogWrite(R2, rojo);
  analogWrite(G2, verde);
  analogWrite(B2, azul);
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
  delay(espera);
  analogWrite(R2, 0);
  analogWrite(G2, 0);
  analogWrite(B2, 0);

  analogWrite(R3, rojo);
  analogWrite(G3, verde);
  analogWrite(B3, azul);
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
  delay(espera);
  analogWrite(R3, 0);
  analogWrite(G3, 0);
  analogWrite(B3, 0);

  delay(10);
}