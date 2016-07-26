# Interacción digital

## Pulsadores

Usaremos un pulsador que activará cuando esté pulsado un led en parpadeo.

1. Usaremos el montaje de [led](./Led.md)
1. Montamos el pulsador con la resistencia pull-down
![1](./images/pulsador.png)
2. Con una sentencia condicional haremos que se encienda el parpadeo

    if(digitalRead(pinBoton)==HIGH) { .....}

## Sensores táctiles (inductivos)

# Interacción analógica

Desde las entradas analógicas (A0 a A5) podremos leer señales analógicas entre 0 y 5V. Por sencillez, estos valores se mapean en el rango entre 0 y 1023

Leeremos los valores con la función

  int valor = analogRead(Ax);

## Potenciómetro

El montaje es sencillo

![pot](./images/Pot.png)

El código:

    int led10 = 10;
    int potenciometro = A0;

    void setup() {
        pinMode(led10, OUTPUT);
        Serial.begin(9600);
    }

    void loop() {
        digitalWrite(led10, HIGH);
        Serial.println("Encendido");
        delay(analogRead(potenciometro));
        digitalWrite(led10, LOW);
        Serial.println("Apagado");
        delay(analogRead(potenciometro));
    }


## Medida de LUZ

![3](./images/ldr.png)

## Acelerómetro

## Ejercicios

### Voltímetro

Vamos a añadir al ejemplo anterior la medida de voltaje.

Calculamos el voltaje que tendrá el pin A0 con la fórmula

    v=lectura*5.0/1023

(hay que recordar la importancia de hacer el cálculo con número decimales)

Enviamos datos al PC


### Control de un dimmer con  un potenciómetro

![6](./images/arduino_pot_led.png)

### Control del color de leds RGBs con 3 potenciometros

![7](./images/3Pot-RGB.png)
