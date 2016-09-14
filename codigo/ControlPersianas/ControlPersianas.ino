int boton=12;
int detector=11;

int rele_motor=9;

void setup() {
pinMode(boton,INPUT_PULLUP);
pinMode(detector,INPUT);
pinMode(rele_motor,OUTPUT);

Serial.begin(9600);
}

void loop() {

  int estadoBoton=digitalRead(boton);
  int estadoDetector=digitalRead(detector);
  Serial.print("Boton:");
  Serial.print(estadoBoton);
  Serial.print(" Detector:");
  Serial.println(estadoDetector);
  
  if(estadoBoton==LOW) // Hemos pulsado el boton
  {
    delay(50);
    if(estadoDetector==LOW)  // El detector no detecta el fin de la persiana
    {
      digitalWrite(rele_motor,HIGH);
    }
    else
    {
      digitalWrite(rele_motor,LOW);
    }
  }
  else
  {
    delay(50);
    digitalWrite(rele_motor,LOW);
  }
}
