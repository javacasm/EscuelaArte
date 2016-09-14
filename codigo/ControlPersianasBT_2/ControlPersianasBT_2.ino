#include <SoftwareSerial.h> //Librería que permite establecer comunicación serie en otros pins
 
//Aquí conectamos los pins RXD,TDX del módulo Bluetooth.
SoftwareSerial BT(3,2); //10 RX, 11 TX.

int rele_motor=9;
 
void setup()
{
  BT.begin(9600); //Velocidad del puerto del módulo Bluetooth
  Serial.begin(9600); //Abrimos la comunicación serie con el PC y establecemos velocidad
  pinMode(rele_motor,OUTPUT);
}
 
void loop()
{
  while(BT.available()>0)
  {
    int iChar=Serial.read();
    Serial.println((char)iChar);
    if(iChar=='1')
      digitalWrite(rele_motor,HIGH);
    else
     digitalWrite(rele_motor,LOW);
  }
}
