void setup()
{
 	pinMode( 7 , OUTPUT );
  	pinMode( 4 , OUTPUT );
  	pinMode( 2 , OUTPUT );
  	pinMode( 9 , OUTPUT );
  	pinMode( 8 , OUTPUT );
}

void loop()
{
  	digitalWrite( 9 , HIGH );
  	digitalWrite( 7 , HIGH );
  delay(5000);
  	digitalWrite( 4 , HIGH );
  delay(1500);
  	digitalWrite( 7 , LOW );
  	digitalWrite( 9 , LOW );
    digitalWrite( 4 , LOW );
    digitalWrite( 2 , HIGH );	
  	digitalWrite( 8 , HIGH );
  delay(5000);
    digitalWrite( 2 , LOW );
  	digitalWrite( 8 , LOW );
  delay(500);
}