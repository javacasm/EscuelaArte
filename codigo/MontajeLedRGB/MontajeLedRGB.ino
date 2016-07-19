/* PROGRAMA PARA LA INSTALACION DE UNA EXPOSICION
EN LA ESCUELA DE ARTE DE GRANADA EL DIA 5/FEBRERO/2016

DESARROLLADO POR PACO CANTON  Y LOS ALUMNOS  PARTICIPANTES EN LA II SEMANA DEL DISEÑO DE LA LUZ EN INTERIOR

Adaptado por javacasm en Julio del 2016

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

// Coleccion de todos los leds, por su construcción podemos ver que todos los de un mismo color están de 3 en 3
int leds[] = {R1, G1, B1, R2, G2, B2, R3, G3, B3, R4, G4, B4, R5, G5, B5, R6, G6, B6, R7, G7, B7, R8, G8, B8, R9, G9, B9, R10, G10, B10};

int total_usados = 30;

void setup() {
  // bucle que recorre desde el primer led (0) hasta el último
  for(int i=0;i<total_usados;i++) {
    pinMode(leds[i],OUTPUT);
  }
}

// Funciones que encienden y/o apagan determinadas sencuencias


// Encendemos todos
void todosOn()
{
  for(int i=0;i<total_usados;i++) {
    digitalWrite(leds[i],HIGH);
  }
}


// Apagamos todos
void todosOff()
{
  for(int i=0;i<total_usados;i++) {
    digitalWrite(leds[i],LOW);
  }
}

void RojosOn()
{
  for(int i=0;i<total_usados;i++) { // el primero rojo es el 0
    digitalWrite(leds[i],HIGH);
  }
}

void AzulesOn()
{
  for(int i=2;i<total_usados;i++) { // el primero azul es el 2
    digitalWrite(leds[i],HIGH);
  }
}

// ¿Como se haría para los verdes? ¿y para apagarlos?

void loop()

{
  todosOff();
  delay(1000); // Esperamos 1 segundo

  RojosOn();

  delay(1000);

  VerdesOn();

  delay(1000);

  todoOn();

}
