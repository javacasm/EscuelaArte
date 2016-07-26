Motores


# Servos

![servo](./imgages/knob_bb.png)

    #include <Servo.h> // incluimos la librería servo

    Servo servo;

    void setup() {
    servo.attach(9);  // Conectamos a la patilla 9

    }

    void loop() {

    // servo.write(120);  // va a la posición fija de 120º

    int potenciometro=analogRead(A0);  // entre 0 y 1023

    int posicionServo=map(potenciometro,0,1023,0,180);

    servo.write(posicionServo);

    }
