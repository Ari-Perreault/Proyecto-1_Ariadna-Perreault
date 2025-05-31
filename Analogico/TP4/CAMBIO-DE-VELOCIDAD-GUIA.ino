#define LED_B 5
#define LED_R1 6
#define LED_G 9
#define LED_R2 10

#define POT_T A0
void setup()
{
  pinMode(LED_B, OUTPUT);
  pinMode(LED_R1, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_R2, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int potValor = analogRead(POT_T);
  int delayT = map(potValor, 0, 1023, 100, 1000);

//monitor serial
  Serial.print("Potenciometro: ");
  Serial.print(potValor);
  Serial.print("  -  Delay: ");
  Serial.println(delayT);

//parpadeo magenta
	analogWrite(LED_B, 255);
    analogWrite(LED_R1, 150);
	delay(delayT);
	analogWrite(LED_B, 0);
    analogWrite(LED_R1, 0);
	delay(delayT);
//parpadeo amarillo
	analogWrite(LED_G, 150);
    analogWrite(LED_R2, 255);
	delay(delayT);
	analogWrite(LED_G, 0);
    analogWrite(LED_R2, 0);
	delay(delayT);
}