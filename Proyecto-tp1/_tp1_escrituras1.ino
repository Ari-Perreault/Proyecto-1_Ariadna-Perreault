#define LED_R1 11
#define LED_R2 12
#define LED_R3 6
#define LED_B1 8
#define LED_B2 4
#define LED_G1 10
#define LED_G2 5
#define LED_G3 3
#define BUZER 9
void setup()
{
  pinMode(LED_R1, OUTPUT);
  pinMode(LED_R2, OUTPUT);
  pinMode(LED_R3, OUTPUT);
  pinMode(LED_B1, OUTPUT);
  pinMode(LED_B2, OUTPUT);
  pinMode(LED_G1, OUTPUT);
  pinMode(LED_G2, OUTPUT);
  pinMode(LED_G3, OUTPUT);
  pinMode(BUZER, OUTPUT);



}

void loop()
{
	analogWrite(LED_R1, 255);
  delay(2000);
    analogWrite(LED_R1, 0);
  /*-----------------BUZER----------------------*/
  	analogWrite(BUZER, 150);
  delay(100);
  	analogWrite(BUZER, 0);
  /*-----------------PARPADEO---------------------*/
  delay(100);
    analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
       analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
      analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
      analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
  /*---------------FIN DE PARPADEO-------------------------*/
  	digitalWrite(LED_R2, HIGH);
  	digitalWrite(LED_B1, HIGH);
  delay(2000);
  	digitalWrite(LED_R2, LOW);
  	digitalWrite(LED_B1, LOW);
  /*-----------------BUZER----------------------*/
  	analogWrite(BUZER, 150);
  delay(100);
  	analogWrite(BUZER, 0);
    /*-----------------PARPADEO--------------------*/
  delay(150);
    analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
       analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
      analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
      analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
  /*-----------------FIN DE PARPADEO-----------------------*/
  	analogWrite(LED_B2, 50);
  	analogWrite(LED_G3, 50);
  delay(2000);
  	analogWrite(LED_B2, 0);
  	analogWrite(LED_G3, 0);
  delay(2000);
  /*-----------------BUZER----------------------*/
  	analogWrite(BUZER, 150);
  delay(100);
  	analogWrite(BUZER, 0);
    /*-------------------PARPADEO---------------------*/
  delay(150);
    analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
       analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
      analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
      analogWrite(LED_R1, 255);
  	digitalWrite(LED_R2, HIGH);
 	analogWrite(LED_R3, 255);
  	analogWrite(LED_G1, 50);
  	analogWrite(LED_G2, 50);
	analogWrite(LED_G3, 50);
  delay(150);
     analogWrite(LED_R1, 0);
  	digitalWrite(LED_R2, LOW);
 	analogWrite(LED_R3, 0);
    analogWrite(LED_G1, 0);
  	analogWrite(LED_G2, 0);
	analogWrite(LED_G3, 0);
  delay(150);
  /*-----------------FIN DE PARPADEO-----------------------*/
  /*-----------------BUZER----------------------*/
  	analogWrite(BUZER, 150);
  delay(100);
  	analogWrite(BUZER, 0);
  delay(50);
}