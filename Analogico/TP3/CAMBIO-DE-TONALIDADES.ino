#define LED_G  3
#define LED_B 5
#define LED_R 6
void setup()
{
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_R, OUTPUT);
}

void loop()
{
  analogWrite(LED_B, 255);
  analogWrite(LED_G, 100);
  delay(1500);
  analogWrite(LED_B, 150);
  analogWrite(LED_G, 100);
  delay(1500);
  analogWrite(LED_B, 25);
  analogWrite(LED_G, 10);
  delay(1500);
  analogWrite(LED_B, 0);
  analogWrite(LED_G, 0);
  delay(500);
  analogWrite(LED_R, 255);
  delay(1500);
  analogWrite(LED_R, 150);
  delay(1500);
  analogWrite(LED_R, 25);
  delay(1500);
  analogWrite(LED_R, 0);
  delay(500);
  analogWrite(LED_R, 255);
  analogWrite(LED_G, 100);
  delay(1500);
  analogWrite(LED_R, 150);
  analogWrite(LED_G, 100);
  delay(1500);
  analogWrite(LED_R, 25);
  analogWrite(LED_G, 10);
  delay(1500);
  analogWrite(LED_R, 0);
  analogWrite(LED_G, 0);
  delay(500);
}