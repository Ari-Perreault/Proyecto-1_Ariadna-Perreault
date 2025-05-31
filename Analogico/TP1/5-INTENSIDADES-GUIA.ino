#define LED1 6
void setup() {
	pinMode(LED1, OUTPUT);
}
void loop()
{
	analogWrite(LED1 , 5);
  delay(1000)
    analogWrite(LED1 , 50);
  delay(1000)
    analogWrite(LED1 , 100);
  delay(1000)
    analogWrite(LED1 , 150);
  delay(1000);
    analogWrite(LED1 , 255);
   delay(1000);
}