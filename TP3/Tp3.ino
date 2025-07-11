#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

#define LED_R1  2
#define LED_G1  4
#define LED_B1 A1
#define LED_R2 A3
#define LED_G2 A5
#define LED_B2 A4
#define BUZZ    7

#define LDR    A2
#define TMP    A0
#define PIR     3
#define TRIG    6
#define ECHO    5
  
void setup()
{
  lcd.begin(16, 2);
  
  pinMode( LED_R1 , OUTPUT);
  pinMode( LED_G1 , OUTPUT);
  pinMode( LED_B1 , OUTPUT);
  pinMode( LED_R2 , OUTPUT);
  pinMode( LED_G2 , OUTPUT);
  pinMode( LED_B2 , OUTPUT);
  pinMode( BUZZ   , OUTPUT);
  pinMode( TRIG   , OUTPUT);
  
  pinMode( LDR   , INPUT);
  pinMode( TMP    ,  INPUT);
  pinMode( ECHO   ,  INPUT);
  pinMode( PIR    ,  INPUT);
}

void loop()
{ 
  int luz = analogRead(LDR);//1-310
  int porcentLuz = map( luz, 1 , 310 , 0 , 100 );

  int limitado = constrain(porcentLuz ,0,100);
  
  int temp = analogRead(TMP);
  float volt = temp * 5.0 / 1024;
  float tempFinal = volt * 100 - 50;
  
  bool movimiento = digitalRead(PIR);
  
  digitalWrite( TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite( TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite( TRIG, LOW);
 
  float tiempo = pulseIn( ECHO , HIGH );
  float distancia = tiempo / 57.6;
  
  //MENSAJE EN EL MONITOR LCD MENSAJE EN EL MONITOR LCD MENSAJE EN EL MONITOR LCD
  
  lcd.setCursor(0, 0);
  lcd.print("TMP:");
  lcd.print( tempFinal );
  lcd.print("C");
  lcd.setCursor(11, 0);
  lcd.print("MOV:");
  lcd.print( movimiento );
  lcd.setCursor(0, 1);
  lcd.print( "LUZ:" );
  lcd.print( porcentLuz );
  lcd.print( "%" );
  lcd.setCursor(7, 1);
  lcd.print("DIS:");
  lcd.print( distancia );
  
  //DIA O NOCHE   DIA O NOCHE  DIA O NOCHE  DIA O NOCHE  DIA O NOCHE  
  
  if ( porcentLuz < 20){
  
  //Temperatura de la Obra Temperatura de la Obra
  
  if (tempFinal > 39){
    digitalWrite( LED_R1, HIGH);
    digitalWrite( BUZZ  , HIGH);
    delay(500);
    digitalWrite( BUZZ  ,  LOW);
    delay(250);
  }
  else
  {
    digitalWrite( LED_R1,  LOW);
    digitalWrite( BUZZ  ,  LOW);
    digitalWrite( LED_R1,  LOW);
  }
  
  //Sensor de movimiento Sensor de movimiento Sensor de movimiento 
  
  if (movimiento){
    digitalWrite( LED_R2, HIGH);
    digitalWrite( LED_G2, HIGH);
    digitalWrite( BUZZ  , HIGH);
    delay(500);
    digitalWrite( BUZZ ,  LOW);
    delay(250);
  }
  else
  {
    digitalWrite( LED_R2,  LOW);
    digitalWrite( LED_G2,  LOW);
    digitalWrite( BUZZ  ,  LOW);
  }
    
  }
  else
  {
    digitalWrite( LED_R1,  LOW);
    digitalWrite( LED_R2,  LOW);
    digitalWrite( LED_G2,  LOW);
    digitalWrite( BUZZ  ,  LOW);
    
   //Sensor de Distancia Sensor de Distancia Sensor de Distancia
   
    if (distancia < 1000){
    digitalWrite( LED_R2, HIGH);
    digitalWrite( BUZZ  , HIGH);
    delay(500);
    digitalWrite( BUZZ  ,  LOW);
    delay(250);
  }
  else if ( porcentLuz > 20 )
  {
    digitalWrite( LED_R2,  LOW);
    digitalWrite( BUZZ  ,  LOW);
  }
 }
  
}