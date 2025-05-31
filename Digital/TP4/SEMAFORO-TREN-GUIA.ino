#define BUZZER 13 
#define LED1 11 
#define LED2 12
void setup()
{
	pinMode( LED1, OUTPUT);
  	pinMode( LED2, OUTPUT);
  	pinMode( BUZZER, OUTPUT);
}

void loop()
{
  	digitalWrite( BUZZER, HIGH);
	digitalWrite( LED1, HIGH);
  delay(300);
    digitalWrite( LED1, LOW);
    digitalWrite( LED2, HIGH);
  delay(300);
    digitalWrite( LED2, LOW);
}