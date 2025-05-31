#define IMPAR1 5
#define IMPAR2 6
#define IMPAR3 7
#define IMPAR4 4
#define IMPAR5 3
#define PAR1 8
#define PAR2 9
#define PAR3 10
#define PAR4 11
#define PAR5 12
void setup()
{
	pinMode( IMPAR1 , OUTPUT);
	pinMode( IMPAR2 , OUTPUT);
	pinMode( IMPAR3 , OUTPUT);
	pinMode( IMPAR4 , OUTPUT);
	pinMode( IMPAR5 , OUTPUT);
	pinMode( PAR1 , OUTPUT);
	pinMode( PAR2 , OUTPUT);
	pinMode( PAR3 , OUTPUT);
	pinMode( PAR4 , OUTPUT);
	pinMode( PAR5 , OUTPUT);
  	
}

void loop()
{
    /*ENCENDIDO*/
	digitalWrite( IMPAR1, HIGH);
    digitalWrite( IMPAR2, HIGH);
    digitalWrite( IMPAR3, HIGH);
    digitalWrite( IMPAR4, HIGH);
    digitalWrite( IMPAR5, HIGH);
  delay(2000);
    /*APAGADO*/
	digitalWrite( IMPAR1, LOW);
	digitalWrite( IMPAR2, LOW);
	digitalWrite( IMPAR3, LOW);
	digitalWrite( IMPAR4, LOW);
	digitalWrite( IMPAR5, LOW);
    /*ENCENDIDO*/
  	digitalWrite( PAR1, HIGH);
  	digitalWrite( PAR2, HIGH);
 	digitalWrite( PAR3, HIGH);
  	digitalWrite( PAR4, HIGH);
  	digitalWrite( PAR5, HIGH);
  delay(2000);
    /*APAGADO*/
    digitalWrite( PAR1, LOW);
  	digitalWrite( PAR2, LOW);
 	digitalWrite( PAR3, LOW);
  	digitalWrite( PAR4, LOW);
  	digitalWrite( PAR5, LOW);
}