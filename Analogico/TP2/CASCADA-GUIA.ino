#define LED1 1
#define LED2 6
#define LED3 3
#define LED4 5
#define LED5 9
#define LED6 10
#define LED7 11
#define LED8 13
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, LOW);
  analogWrite(LED2, 30);
  analogWrite(LED3, 60);
  analogWrite(LED4, 90);
  analogWrite(LED5, 120);
  analogWrite(LED6, 150);
  analogWrite(LED7, 180);
  digitalWrite(LED8, HIGH);
}