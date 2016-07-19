/* PROGRAMA PARA LA INSTALACION DE UNA EXPOSICION
EN LA ESCUELA DE ARTE DE GRANADA EL DIA 5/FEBRERO/2016

DESARROLLADO POR PACO CANTON  Y LOS ALUMNOS  PARTICIPANTES EN LA II SEMANA DEL DISEÑO DE LA LUZ EN INTERIOR
LICENCIA CC - BY
*/

#define R1 13  //el color rojo de la luminaria 1 esta conectado al pin 13 y asi sucesivamente
#define G1 12
#define B1 11
#define R2 10
#define G2 9
#define B2 8
#define R3 7
#define G3 6
#define B3 5
#define R4 4
#define G4 3
#define B4 2
#define R5 30
#define G5 31
#define B5 32
#define R6 33
#define G6 34
#define B6 35
#define R7 36
#define G7 37
#define B7 38
#define R8 39
#define G8 40
#define B8 41
#define R9 42
#define G9 43
#define B9 44
#define R10 45
#define G10 46
#define B10 47
int leds[] = {R1, G1, B1, R2, G2, B2, R3, G3, B3, R4, G4, B4, R5, G5, B5, R6, G6, B6, R7, G7, B7, R8, G8, B8, R9, G9, B9, R10, G10, B10};
int total_usados = 30;

void setup() {
  pinMode (R1, OUTPUT);
  pinMode (G1, OUTPUT);
  pinMode (B1, OUTPUT);
  pinMode (R2, OUTPUT);
  pinMode (G2, OUTPUT);
  pinMode (B2, OUTPUT);
  pinMode (R3, OUTPUT);
  pinMode (G3, OUTPUT);
  pinMode (B3, OUTPUT);
  pinMode (R4, OUTPUT);
  pinMode (G4, OUTPUT);
  pinMode (B4, OUTPUT);
  pinMode (R5, OUTPUT);
  pinMode (G5, OUTPUT);
  pinMode (B5, OUTPUT);
  pinMode (R6, OUTPUT);
  pinMode (G6, OUTPUT);
  pinMode (B6, OUTPUT);
  pinMode (R7, OUTPUT);
  pinMode (G7, OUTPUT);
  pinMode (B7, OUTPUT);
  pinMode (R8, OUTPUT);
  pinMode (G8, OUTPUT);
  pinMode (B8, OUTPUT);
  pinMode (R9, OUTPUT);
  pinMode (G9, OUTPUT);
  pinMode (B9, OUTPUT);
  pinMode (R10, OUTPUT);
  pinMode (G10, OUTPUT);
  pinMode (B10, OUTPUT);
  apagarTodos();
}



void loop() {
/*
  // SECUENCIA 4. JAVIER - MEZCLA COLORES
  digitalWrite(R1, HIGH);
  digitalWrite(B10, HIGH);
  delay(250);
  digitalWrite(R1, LOW);
  digitalWrite(B10, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(B9, HIGH);
  delay(250);
  digitalWrite(R2, LOW);
  digitalWrite(B9, LOW);
  digitalWrite(R3, HIGH);
  digitalWrite(B8, HIGH);
  delay(150);
  digitalWrite(R3, LOW);
  digitalWrite(B8, LOW);
  digitalWrite(R4, HIGH);
  digitalWrite(B7, HIGH);
  delay(250);
  digitalWrite(R4, LOW);
  digitalWrite(B7, LOW);
  digitalWrite(R5, HIGH);
  digitalWrite(B6, HIGH);
  delay(250);
  digitalWrite(R6, HIGH);
  digitalWrite(B5, HIGH);
  delay(250);
  digitalWrite(R5, LOW);
  digitalWrite(R6, LOW);
  digitalWrite(B5, LOW);
  digitalWrite(B6, LOW);
  digitalWrite(R4, HIGH);
  digitalWrite(R7, HIGH);
  digitalWrite(B4, HIGH);
  digitalWrite(B7, HIGH);
  delay(250);
  digitalWrite(R4, LOW);
  digitalWrite(R7, LOW);
  digitalWrite(B4, LOW);
  digitalWrite(B7, LOW);
  digitalWrite(R3, HIGH);
  digitalWrite(R8, HIGH);
  digitalWrite(B3, HIGH);
  digitalWrite(B8, HIGH);
  delay(250);
  digitalWrite(R3, LOW);
  digitalWrite(R8, LOW);
  digitalWrite(B3, LOW);
  digitalWrite(B8, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(R9, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(B9, HIGH);
  delay(250);
  digitalWrite(R2, LOW);
  digitalWrite(R9, LOW);
  digitalWrite(B2, LOW);
  digitalWrite(B9, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(R10, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(B10, HIGH);
  delay(250);
  apagarTodos();
  delay(250);
  digitalWrite(R10, HIGH);
  digitalWrite(G1, HIGH);
  delay(250);
  digitalWrite(G1, LOW);
  digitalWrite(R10, LOW);
  digitalWrite(G2, HIGH);
  digitalWrite(R9, HIGH);
  delay(250);
  digitalWrite(G2, LOW);
  digitalWrite(R9, LOW);
  digitalWrite(G3, HIGH);
  digitalWrite(R8, HIGH);
  delay(250);
  digitalWrite(G3, LOW);
  digitalWrite(R8, LOW);
  digitalWrite(G4, HIGH);
  digitalWrite(R7, HIGH);
  delay(250);
  digitalWrite(G4, LOW);
  digitalWrite(R7, LOW);
  digitalWrite(G5, HIGH);
  digitalWrite(R6, HIGH);
  delay(250);
  digitalWrite(G6, HIGH);
  digitalWrite(R5, HIGH);
  delay(250);
  digitalWrite(G5, LOW);
  digitalWrite(G6, LOW);
  digitalWrite(R5, LOW);
  digitalWrite(R6, LOW);
  digitalWrite(G4, HIGH);
  digitalWrite(G7, HIGH);
  digitalWrite(R4, HIGH);
  digitalWrite(R7, HIGH);
  delay(250);
  digitalWrite(G4, LOW);
  digitalWrite(G7, LOW);
  digitalWrite(R4, LOW);
  digitalWrite(R7, LOW);
  digitalWrite(G3, HIGH);
  digitalWrite(G8, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R8, HIGH);
  delay(250);
  digitalWrite(G3, LOW);
  digitalWrite(G8, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(R8, LOW);
  digitalWrite(G2, HIGH);
  digitalWrite(G9, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R9, HIGH);
  delay(250);
  digitalWrite(G2, LOW);
  digitalWrite(G9, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(R9, LOW);
  digitalWrite(G1, HIGH);
  digitalWrite(G10, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(R10, HIGH);
  delay(250);
 apagarTodos();
  delay(250);
  digitalWrite(G10, HIGH);
  digitalWrite(B1, HIGH);
  delay(250);
  digitalWrite(B1, LOW);
  digitalWrite(G10, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(G9, HIGH);
  delay(250);
  digitalWrite(B2, LOW);
  digitalWrite(G9, LOW);
  digitalWrite(B3, HIGH);
  digitalWrite(G8, HIGH);
  delay(250);
  digitalWrite(B3, LOW);
  digitalWrite(G8, LOW);
  digitalWrite(B4, HIGH);
  digitalWrite(G7, HIGH);
  delay(250);
  digitalWrite(B4, LOW);
  digitalWrite(G7, LOW);
  digitalWrite(B5, HIGH);
  digitalWrite(G6, HIGH);
  delay(250);
  digitalWrite(B6, HIGH);
  digitalWrite(G5, HIGH);
  delay(250);
  digitalWrite(B5, LOW);
  digitalWrite(B6, LOW);
  digitalWrite(G5, LOW);
  digitalWrite(G6, LOW);
  digitalWrite(B4, HIGH);
  digitalWrite(B7, HIGH);
  digitalWrite(G4, HIGH);
  digitalWrite(G7, HIGH);
  delay(250);
  digitalWrite(B4, LOW);
  digitalWrite(B7, LOW);
  digitalWrite(G4, LOW);
  digitalWrite(G7, LOW);
  digitalWrite(B3, HIGH);
  digitalWrite(B8, HIGH);
  digitalWrite(G3, HIGH);
  digitalWrite(G8, HIGH);
  delay(250);
  digitalWrite(B3, LOW);
  digitalWrite(B8, LOW);
  digitalWrite(G3, LOW);
  digitalWrite(G8, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(B9, HIGH);
  digitalWrite(G2, HIGH);
  digitalWrite(G9, HIGH);
  delay(250);
  digitalWrite(B2, LOW);
  digitalWrite(B9, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(G9, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(B10, HIGH);
  digitalWrite(G1, HIGH);
  digitalWrite(G10, HIGH);
  delay(250);
  apagarTodos();
  delay(250);
  digitalWrite(G10, HIGH);
  digitalWrite(B10, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(B1, HIGH);
  delay(250);
  digitalWrite(R1, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(B10, LOW);
  digitalWrite(G10, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(B9, HIGH);
  digitalWrite(G9, HIGH);
  delay(250);
  digitalWrite(R2, LOW);
  digitalWrite(B2, LOW);
  digitalWrite(B9, LOW);
  digitalWrite(G9, LOW);
  digitalWrite(R3, HIGH);
  digitalWrite(B3, HIGH);
  digitalWrite(B8, HIGH);
  digitalWrite(G8, HIGH);
  delay(250);
  digitalWrite(R3, LOW);
  digitalWrite(B3, LOW);
  digitalWrite(B8, LOW);
  digitalWrite(G8, LOW);
  digitalWrite(R4, HIGH);
  digitalWrite(B4, HIGH);
  digitalWrite(B7, HIGH);
  digitalWrite(G7, HIGH);
  delay(250);
  digitalWrite(R4, LOW);
  digitalWrite(B4, LOW);
  digitalWrite(B7, LOW);
  digitalWrite(G7, LOW);
  digitalWrite(R5, HIGH);
  digitalWrite(B5, HIGH);
  digitalWrite(B6, HIGH);
  digitalWrite(G6, HIGH);
  delay(250);
  digitalWrite(G5, HIGH);
  digitalWrite(R6, HIGH);
  delay(250);
  apagar5();
  apagar6();
  encender4();
  encender7();
  delay(250);
  apagar4();
  apagar7();
  encender3();
  encender8();
  delay(250);
  apagar3();
  apagar8();
  encender2();
  (encender9);
  delay(250);
  apagar2();
  apagar9();
  encender1();
  encender10();
  delay(250);
*/
encender2();
delay(1000);
apagarTodos();
delay(1000);


}

void encender1(){
  digitalWrite(R1, HIGH);
  digitalWrite(G1, HIGH);
  digitalWrite(B1, HIGH);
}

void encender2(){
  digitalWrite(R2, HIGH);
  digitalWrite(G2, HIGH);
  digitalWrite(B2, HIGH);
}

void encender3(){
  digitalWrite(R3, HIGH);
  digitalWrite(G3, HIGH);
  digitalWrite(B3, HIGH);
}

void encender4(){
  digitalWrite(R4, HIGH);
  digitalWrite(G4, HIGH);
  digitalWrite(B4, HIGH);
}

void encender5(){
  digitalWrite(R5, HIGH);
  digitalWrite(G5, HIGH);
  digitalWrite(B5, HIGH);
}

void encender6(){
  digitalWrite(R6, HIGH);
  digitalWrite(G6, HIGH);
  digitalWrite(B6, HIGH);
}

void encender7(){
  digitalWrite(R7, HIGH);
  digitalWrite(G7, HIGH);
  digitalWrite(B7, HIGH);
}

void encender8(){
  digitalWrite(R8, HIGH);
  digitalWrite(G8, HIGH);
  digitalWrite(B8, HIGH);
}

void encender9(){
  digitalWrite(R9, HIGH);
  digitalWrite(G9, HIGH);
  digitalWrite(B9, HIGH);
}

void encender10(){
  digitalWrite(R10, HIGH);
  digitalWrite(G10, HIGH);
  digitalWrite(B10, HIGH);
}

void encenderTodos(){
  digitalWrite(R1, HIGH);
  digitalWrite(G1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(G2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(G3, HIGH);
  digitalWrite(B3, HIGH);
  digitalWrite(R4, HIGH);
  digitalWrite(G4, HIGH);
  digitalWrite(B4, HIGH);
  digitalWrite(R5, HIGH);
  digitalWrite(G5, HIGH);
  digitalWrite(B5, HIGH);
  digitalWrite(R6, HIGH);
  digitalWrite(G6, HIGH);
  digitalWrite(B6, HIGH);
  digitalWrite(R7, HIGH);
  digitalWrite(G7, HIGH);
  digitalWrite(B7, HIGH);
  digitalWrite(R8, HIGH);
  digitalWrite(G8, HIGH);
  digitalWrite(B8, HIGH);
  digitalWrite(R9, HIGH);
  digitalWrite(G9, HIGH);
  digitalWrite(B9, HIGH);
  digitalWrite(R10, HIGH);
  digitalWrite(G10, HIGH);
  digitalWrite(B10, HIGH);
}

void apagar1(){
  digitalWrite(R1, LOW);
  digitalWrite(G1, LOW);
  digitalWrite(B1, LOW);
}

void apagar2(){
  digitalWrite(R2, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(B2, LOW);
}

void apagar3(){
  digitalWrite(R3, LOW);
  digitalWrite(G3, LOW);
  digitalWrite(B3, LOW);
}

void apagar4(){
  digitalWrite(R4, LOW);
  digitalWrite(G4, LOW);
  digitalWrite(B4, LOW);
}

void apagar5(){
  digitalWrite(R5, LOW);
  digitalWrite(G5, LOW);
  digitalWrite(B5, LOW);
}

void apagar6(){
  digitalWrite(R6, LOW);
  digitalWrite(G6, LOW);
  digitalWrite(B6, LOW);
}

void apagar7(){
  digitalWrite(R7, LOW);
  digitalWrite(G7, LOW);
  digitalWrite(B7, LOW);
}

void apagar8(){
  digitalWrite(R8, LOW);
  digitalWrite(G8, LOW);
  digitalWrite(B8, LOW);
}

void apagar9(){
  digitalWrite(R9, LOW);
  digitalWrite(G9, LOW);
  digitalWrite(B9, LOW);
}

void apagar10(){
  digitalWrite(R10, LOW);
  digitalWrite(G10, LOW);
  digitalWrite(B10, LOW);
}

void apagarTodos(){
  digitalWrite(R1, LOW);
  digitalWrite(G1, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(G2, LOW);
  digitalWrite(B2, LOW);
  digitalWrite(R3, LOW);
  digitalWrite(G3, LOW);
  digitalWrite(B3, LOW);
  digitalWrite(R4, LOW);
  digitalWrite(G4, LOW);
  digitalWrite(B4, LOW);
  digitalWrite(R5, LOW);
  digitalWrite(G5, LOW);
  digitalWrite(B5, LOW);
  digitalWrite(R6, LOW);
  digitalWrite(G6, LOW);
  digitalWrite(B6, LOW);
  digitalWrite(R7, LOW);
  digitalWrite(G7, LOW);
  digitalWrite(B7, LOW);
  digitalWrite(R8, LOW);
  digitalWrite(G8, LOW);
  digitalWrite(B8, LOW);
  digitalWrite(R9, LOW);
  digitalWrite(G9, LOW);
  digitalWrite(B9, LOW);
  digitalWrite(R10, LOW);
  digitalWrite(G10, LOW);
  digitalWrite(B10, LOW);
}

void rojoON(){
 digitalWrite(R1, HIGH);
 digitalWrite(R2, HIGH);
 digitalWrite(R3, HIGH);
 digitalWrite(R4, HIGH);
 digitalWrite(R5, HIGH);
 digitalWrite(R6, HIGH);
 digitalWrite(R7, HIGH);
 digitalWrite(R8, HIGH);
 digitalWrite(R9, HIGH);
 digitalWrite(R10, HIGH);
}

void rojoOFF(){
 digitalWrite(R1, LOW);
 digitalWrite(R2, LOW);
 digitalWrite(R3, LOW);
 digitalWrite(R4, LOW);
 digitalWrite(R5, LOW);
 digitalWrite(R6, LOW);
 digitalWrite(R7, LOW);
 digitalWrite(R8, LOW);
 digitalWrite(R9, LOW);
 digitalWrite(R10, LOW);
}

void verdeON(){
 digitalWrite(G1, HIGH);
 digitalWrite(G2, HIGH);
 digitalWrite(G3, HIGH);
 digitalWrite(G4, HIGH);
 digitalWrite(G5, HIGH);
 digitalWrite(G6, HIGH);
 digitalWrite(G7, HIGH);
 digitalWrite(G8, HIGH);
 digitalWrite(G9, HIGH);
 digitalWrite(G10, HIGH);
}

void verdeOFF(){
 digitalWrite(G1, LOW);
 digitalWrite(G2, LOW);
 digitalWrite(G3, LOW);
 digitalWrite(G4, LOW);
 digitalWrite(G5, LOW);
 digitalWrite(G6, LOW);
 digitalWrite(G7, LOW);
 digitalWrite(G8, LOW);
 digitalWrite(G9, LOW);
 digitalWrite(G10, LOW);
}

void azulON(){
 digitalWrite(B1, HIGH);
 digitalWrite(B2, HIGH);
 digitalWrite(B3, HIGH);
 digitalWrite(B4, HIGH);
 digitalWrite(B5, HIGH);
 digitalWrite(B6, HIGH);
 digitalWrite(B7, HIGH);
 digitalWrite(B8, HIGH);
 digitalWrite(B9, HIGH);
 digitalWrite(B10, HIGH);
}

void azulOFF(){
 digitalWrite(B1, LOW);
 digitalWrite(B2, LOW);
 digitalWrite(B3, LOW);
 digitalWrite(B4, LOW);
 digitalWrite(B5, LOW);
 digitalWrite(B6, LOW);
 digitalWrite(B7, LOW);
 digitalWrite(B8, LOW);
 digitalWrite(B9, LOW);
 digitalWrite(B10, LOW);
}

void colorAcolor(){
  for (int i = 0; i < total_usados; i++) {

    // ENCENDER

   digitalWrite(leds[i], HIGH);

   delay(50);

   // APAGAR

   digitalWrite(leds[i], LOW);
  }
}

void aleatorio(){
  for (int i=0; i < 100; i++) {
    digitalWrite(leds[random(0,29)], HIGH);
    delay(5);
    digitalWrite(leds[random(0,29)], LOW);
    delay(5);
  }
}
