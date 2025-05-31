#define LED_R1 11 
#define LED_R2 10
#define LED_B1 9
#define LED_B2 6
#define LED_G1 5
#define LED_G2 3
void setup()
{
  pinMode(LED_R1 , OUTPUT);
  pinMode(LED_R2 , OUTPUT);
  pinMode(LED_B1 , OUTPUT);
  pinMode(LED_B2 , OUTPUT);
  pinMode(LED_G1 , OUTPUT);
  pinMode(LED_G2 , OUTPUT);
}

void loop()
{
  /* LED N1 */
  analogWrite(LED_R1, 255);
 delay(1000);
  analogWrite(LED_R1, 0);
  analogWrite(LED_B1, 200);
  analogWrite(LED_G1, 100);
 delay(1000);
  analogWrite(LED_B1, 0);
  analogWrite(LED_G1, 255);
delay(1000);
  analogWrite(LED_B1, 250);
  analogWrite(LED_R1, 250);
  analogWrite(LED_G1, 0);
 delay(1000);
  analogWrite(LED_B1, 255);
  analogWrite(LED_R1, 0);
 delay(1000);
  analogWrite(LED_B1, 255);
  analogWrite(LED_R1, 255);
  analogWrite(LED_G1, 255);
 delay(1000);
  analogWrite(LED_B1, 0);
  analogWrite(LED_R1, 255);
  analogWrite(LED_G1, 255);
 delay(1000);
  analogWrite(LED_G1, 0);
  analogWrite(LED_R1,0);
  /* LED N2 */
   analogWrite(LED_R2,255);
 delay(1000);
  analogWrite(LED_R2,0);
  analogWrite(LED_B2,200);
  analogWrite(LED_G2,100);
 delay(1000);
  analogWrite(LED_B2,0);
  analogWrite(LED_G2,255);
delay(1000);
  analogWrite(LED_B2,250);
  analogWrite(LED_R2,250);
  analogWrite(LED_G2,0);
 delay(1000);
  analogWrite(LED_B2,255);
  analogWrite(LED_R2,0);
 delay(1000);
  analogWrite(LED_B2,255);
  analogWrite(LED_R2,255);
  analogWrite(LED_G2,255);
 delay(1000);
  analogWrite(LED_B2,0);
  analogWrite(LED_R2,255);
  analogWrite(LED_G2,255);
 delay(1000);
  analogWrite(LED_G2,0);
  analogWrite(LED_R2,0);
}