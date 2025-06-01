//EL BOTON DEBE MANTENERSE PRESIONADO PARA APAGAR 
//SINO NO ES DETECTADO CORRECTAMENTE
#define LEDR 7
#define LEDG 8
#define LEDB 12
#define LEDY 10
#define LEDY2 11
#define LEDP 6
#define LEDP2 5
#define LEDC 9
#define LEDC2 3

#define POT A0
#define BOT 2

bool estadoLED = false; 
int estadoBoton = LOW;
int ultimoEstadoBoton = LOW;

void setup()
{
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDY, OUTPUT);
  pinMode(LEDY2, OUTPUT);
  pinMode(LEDP, OUTPUT);
  pinMode(LEDP2, OUTPUT);
  pinMode(LEDC, OUTPUT);
  pinMode(LEDC2, OUTPUT);
  
  pinMode(BOT, INPUT_PULLUP); 
 
  Serial.begin(9600);
}

void loop()
{
  estadoBoton = digitalRead(BOT);

  if (estadoBoton == LOW && ultimoEstadoBoton == HIGH) {
    delay(50); 
    if (digitalRead(BOT) == LOW) {
      estadoLED = !estadoLED;
      Serial.print("Cambio de estadoLED: ");
      Serial.println(estadoLED ? "Encendido" : "Apagado");
    }
  }
  ultimoEstadoBoton = estadoBoton;

  if (estadoLED) {
    int potValor = analogRead(POT);
    int delayT = map(potValor, 0, 1023, 100, 2000);

    // Monitor serial
    Serial.print("Potenciometro: ");
    Serial.print(potValor);
    Serial.print("  -  Delay: ");
    Serial.println(delayT);

    // Secuencia de LEDs con verificación constante de estadoLED
    analogWrite(LEDR, 255);   
    delay(delayT);
    if (!estadoLED) return; // Verificar si estadoLED cambió para salir inmediatamente
    analogWrite(LEDR, 0);   

    analogWrite(LEDG, 255);   
    delay(delayT);
    if (!estadoLED) return; 
    analogWrite(LEDG, 0);   

    analogWrite(LEDB, 255);
    delay(delayT);
    if (!estadoLED) return; 
    analogWrite(LEDB, 0);   

    analogWrite(LEDY, 150); 
    analogWrite(LEDY2, 255);
    delay(delayT);
    if (!estadoLED) return; 
    analogWrite(LEDY, 0); 
    analogWrite(LEDY2, 0);

    analogWrite(LEDP, 255); 
    analogWrite(LEDP2, 150);
    delay(delayT);
    if (!estadoLED) return; 
    analogWrite(LEDP, 0); 
    analogWrite(LEDP2, 0);

    analogWrite(LEDC, 150); 
    analogWrite(LEDC2, 255);
    delay(delayT);
    if (!estadoLED) return; 
    analogWrite(LEDC, 0); 
    analogWrite(LEDC2, 0);
  } else {
    // Apagar todos los LEDs
    analogWrite(LEDR, 0);
    analogWrite(LEDG, 0);
    analogWrite(LEDB, 0);
    analogWrite(LEDY, 0); 
    analogWrite(LEDY2, 0);
    analogWrite(LEDP, 0); 
    analogWrite(LEDP2, 0);
    analogWrite(LEDC, 0); 
    analogWrite(LEDC2, 0);
  }
}

