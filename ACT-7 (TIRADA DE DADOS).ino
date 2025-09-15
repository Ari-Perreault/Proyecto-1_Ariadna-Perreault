#define BOT  2
#define BUZZ 3

#include <Adafruit_NeoPixel.h>

#define PIXEL1  6
#define cantNeo 24

#define lenght(v,t) sizeof(v)/sizeof(t)

Adafruit_NeoPixel pixel1 = Adafruit_NeoPixel( cantNeo , PIXEL1 ,NEO_GRB + NEO_KHZ800 );

#define PIXEL2  5
Adafruit_NeoPixel pixel2 = Adafruit_NeoPixel( cantNeo , PIXEL2 ,NEO_GRB + NEO_KHZ800 );

int uno[] = {8,9,14,15};
int dos[] = {0,1,6,7,16,17,22,23};
int tres[] = {0,1,6,7,8,9,14,15,16,17,22,23};
int cuatro[] = {1,4,19,22};
int cinco[] = {0,5,8,9,14,15,18,23};
int seis[] = {0,2,4,18,20,22};

void setup()
{
  pinMode( BOT,  INPUT_PULLUP);
  pinMode( BUZZ, OUTPUT);
  
  pinMode(PIXEL1, OUTPUT);
  pinMode(PIXEL2, OUTPUT);
  
  pixel1.begin();
  pixel1.show();
  pixel1.clear();
  
  pixel2.begin();
  pixel2.show();
  pixel2.clear();
  
  Serial.begin(3600);
}

void loop()
{
  bool bot = digitalRead( BOT );
  delay(50);
  
  if ( bot == HIGH )
  {
    int dado1 = random(1,7);
    int dado2 = random(1,7);
    Serial.print(dado1);
    Serial.print("       ");
    Serial.println(dado2);
    
    if (dado1 == 1)
    {
     pixel1.clear();
     for( int i=0 ; i<lenght(uno,int) ; i++ )
     {
      pixel1.setPixelColor( uno[i] , pixel1.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel1.show(); 
    }
    else if (dado1 == 2)
    {
     pixel1.clear();
     for( int i=0 ; i<lenght(dos,int) ; i++ )
     {
      pixel1.setPixelColor( dos[i] , pixel1.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel1.show(); 
    }
    else if (dado1 == 3)
    {
     pixel1.clear();
     for( int i=0 ; i<lenght(tres,int) ; i++ )
     {
      pixel1.setPixelColor( tres[i] , pixel1.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel1.show(); 
    }
    else if (dado1 == 4)
    {
     pixel1.clear();
     for( int i=0 ; i<lenght(cuatro,int) ; i++ )
     {
      pixel1.setPixelColor( cuatro[i] , pixel1.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel1.show(); 
    }
    else if (dado1 == 5)
    {
     pixel1.clear();
     for( int i=0 ; i<lenght(cinco,int) ; i++ )
     {
      pixel1.setPixelColor( cinco[i] , pixel1.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel1.show(); 
    }
    else if (dado1 == 6)
    {
     pixel1.clear();
     for( int i=0 ; i<lenght(seis,int) ; i++ )
     {
      pixel1.setPixelColor( seis[i] , pixel1.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel1.show(); 
    }
    
    if (dado2 == 1)
    {
     pixel2.clear();
     for( int i=0 ; i<lenght(uno,int) ; i++ )
     {
      pixel2.setPixelColor( uno[i] , pixel2.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel2.show(); 
    }
    else if (dado2 == 2)
    {
     pixel2.clear();
     for( int i=0 ; i<lenght(dos,int) ; i++ )
     {
      pixel2.setPixelColor( dos[i] , pixel2.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel2.show(); 
    }
    else if (dado2 == 3)
    {
     pixel2.clear();
     for( int i=0 ; i<lenght(tres,int) ; i++ )
     {
      pixel2.setPixelColor( tres[i] , pixel2.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel2.show(); 
    }
    else if (dado2 == 4)
    {
     pixel2.clear();
     for( int i=0 ; i<lenght(cuatro,int) ; i++ )
     {
      pixel2.setPixelColor( cuatro[i] , pixel2.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel2.show(); 
    }
    else if (dado2 == 5)
    {
     pixel2.clear();
     for( int i=0 ; i<lenght(cinco,int) ; i++ )
     {
      pixel2.setPixelColor( cinco[i] , pixel2.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel2.show(); 
    }
    else if (dado2 == 6)
    {
     pixel2.clear();
     for( int i=0 ; i<lenght(seis,int) ; i++ )
     {
      pixel2.setPixelColor( seis[i] , pixel2.Color(random(0,255),random(0,255),random(0,255)));
     }
     pixel2.show(); 
    }
    
    int suma = (dado1 + dado2);
    
    if (suma == 7)
    {
      digitalWrite( BUZZ, HIGH);
      delay(500);
      digitalWrite( BUZZ, LOW);
      delay(500);
      digitalWrite( BUZZ, HIGH);
      delay(500);
      digitalWrite( BUZZ, LOW);
      delay(500);
}
    }
  }