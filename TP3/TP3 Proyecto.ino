#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  


const int tempPin = A0;     
const int ldrPin = A1;      
const int pirPin = 2;       
const int trigPin = 3;      
const int echoPin = 4;      
const int redPin = 5;       
const int greenPin = 6;    
const int bluePin = 7;      
const int buzzer = 8;     


const float tempThreshold = 39.0; 
const int luzThreshold = 200;     
const int distanciaSegura = 100;  

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.backlight();

  pinMode(pirPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buzzer, OUTPUT);

  lcd.setCursor(0, 0);
  lcd.print("Sistema Activo");
  delay(2000);
}

void loop() {
 
  float temp = analogRead(tempPin) * 5.0 / 1023.0 * 100.0; 
  int luz = analogRead(ldrPin);
  bool movimiento = digitalRead(pirPin);
  int distancia = medirDistancia();

 
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temp, 1);
  lcd.print(" L:");
  lcd.print(luz);
  lcd.setCursor(0, 1);
  lcd.print("D:");
  lcd.print(distancia);
  lcd.print(" M:");
  lcd.print(movimiento);

  
  Serial.print("Temp: "); Serial.print(temp);
  Serial.print(" | Luz: "); Serial.print(luz);
  Serial.print(" | Movimiento: "); Serial.print(movimiento);
  Serial.print(" | Distancia: "); Serial.println(distancia);

  
  apagarAlerta();

  
  bool noche = (luz < luzThreshold);

 
  if (noche && (movimiento || temp > tempThreshold)) {
    alertaRoja();
  } else if (temp > tempThreshold) {
    alertaRoja();
  } else if (movimiento) {
    alertaAmarilla();
  }

  if (!noche && distancia < distanciaSegura) {
    alertaRojaLarga();
  }

  delay(500);  
}

int medirDistancia() {
  digitalWrite(trigPin, LOW); delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duracion = pulseIn(echoPin, HIGH);
  int distancia = duracion * 0.034 / 2;
  return distancia;
}

void apagarAlerta() {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  noTone(buzzer);
}

void alertaRoja() {
  digitalWrite(redPin, HIGH);
  tone(buzzer, 1000, 300);
}

void alertaRojaLarga() {
  digitalWrite(redPin, HIGH);
  tone(buzzer, 1000);
  delay(1000);
  tone(buzzer, 1000);
  delay(1000);
  noTone(buzzer);
}

void alertaAmarilla() {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
tone(buzzer, 800, 200);
}