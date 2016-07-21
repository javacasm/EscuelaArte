
#define R 9
#define G 10
#define B 11

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // Apagamos todo
  analogWrite(R,0);
  analogWrite(G,0);
  analogWrite(B,0);

  //Gradación de rojos
  for(int i=0;i<255;i+=5)
  { 
    analogWrite(R,i);
    delay(100);
    }

   analogWrite(R,0); // apagamos el rojo
  //Gradación de verdes 
  for(int i=0;i<255;i+=5)
  { 
    analogWrite(G,i);
    delay(100);
  }
  
  analogWrite(G,0);
  //Gradación de azules
  for(int i=0;i<255;i+=5)
  { 
    analogWrite(B,i);
    delay(100);
    }
  analogWrite(B,0);
}
