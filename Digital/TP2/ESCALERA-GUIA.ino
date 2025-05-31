#define LED1_B 13
#define LED1_G 12
#define LED1_O 11
#define LED1_Y 10
#define LED1_R 9
#define LED2_B 7
#define LED2_G 6
#define LED2_O 5
#define LED2_Y 4
#define LED2_R 3
void setup()
{
	pinMode( LED1_B , OUTPUT);
	pinMode( LED1_G , OUTPUT);
	pinMode( LED1_O , OUTPUT);
	pinMode( LED1_Y, OUTPUT);
	pinMode( LED1_R , OUTPUT);
	pinMode( LED2_B , OUTPUT);
	pinMode( LED2_G , OUTPUT);
	pinMode( LED2_O , OUTPUT);
	pinMode( LED2_Y , OUTPUT);
	pinMode( LED2_R , OUTPUT);
}

void loop()
{ 
	digitalWrite( LED1_B , HIGH );
  delay(2000);
	digitalWrite( LED1_B , LOW );
	digitalWrite( LED1_G , HIGH );
 delay(2000);
 	digitalWrite( LED1_G , LOW );
	digitalWrite( LED1_O , HIGH );
delay(2000);
 	digitalWrite( LED1_O , LOW );
	digitalWrite( LED1_Y , HIGH );
delay(2000);
 	digitalWrite( LED1_Y , LOW );
	digitalWrite( LED1_R , HIGH );
delay(2000);
 	digitalWrite( LED1_R , LOW );
	digitalWrite( LED2_B , HIGH );
delay(2000);
 	digitalWrite( LED2_B , LOW );
	digitalWrite( LED2_G , HIGH );
delay(2000);
 	digitalWrite( LED2_G , LOW );
	digitalWrite( LED2_O , HIGH );
delay(2000);
 	digitalWrite( LED2_O , LOW );
	digitalWrite( LED2_Y , HIGH );
delay(2000);
 	digitalWrite( LED2_Y , LOW );
	digitalWrite( LED2_R , HIGH );
delay(2000);
 	digitalWrite( LED2_R , LOW );
delay(2000);
 
}