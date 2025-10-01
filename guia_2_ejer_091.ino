#define LED_R 9   
#define LED_G 10  
#define LED_B 11  

int L1[] = {122, 234, 21};
int L2[] = {33, 53, 155};
int L3[] = {200, 255, 12};

// vector de vectores
int colores[3][3] = {
  {122, 234, 21},
  {33, 53, 155},
  {200, 255, 12}
};

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    analogWrite(LED_R, colores[i][0]); 
    analogWrite(LED_G, colores[i][1]); 
    analogWrite(LED_B, colores[i][2]); 

    delay(1000); 
}
