#define TMP A0
#define mov  2
#define NMOS 3
#define EN   6
#define IN1  5
#define IN2  4

void setup()
{
  pinMode(TMP, INPUT);
  pinMode(mov, INPUT);
  
  pinMode(NMOS, OUTPUT);
  pinMode(EN  , OUTPUT);
  pinMode(IN1 , OUTPUT);
  pinMode(IN2 , OUTPUT);
}

void loop()
{
  //VARIABLES
  bool movimiento = digitalRead(mov);
  int temp = analogRead(TMP);
  float volt = temp * 5.0 / 1024;
  float tempC = volt * 100 - 50;
  
  //50° 
  if (tempC > 50){
    analogWrite(EN,  255);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
  }
  else
  {
    // >50°
    analogWrite(EN,  0);
    digitalWrite(IN1, LOW);
    
    //MOV DETECTADO 
    if (movimiento){
      digitalWrite(NMOS, 255);
      
    //<15° 
      if (tempC <= 15) { 
        analogWrite(EN, 50);
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
      }
    //<20° 
      else if (tempC <= 20) {
        analogWrite(EN, 100);
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
      }
    //<30° 
      else if (tempC <= 30) {
        analogWrite(EN, 150);
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
      }
    }
    else
    {
    //NO HAY MOV DETECTADO
      digitalWrite(NMOS, 0);
      analogWrite(EN, 0);
      digitalWrite(IN1, LOW);
    }
  }
  delay(500);
}