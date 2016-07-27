#include <Wire.h> //I2C Arduino Library

#define address 0x1E //0011110b, I2C 7bit address of HMC5883

void setup(){
  //Initialize Serial and I2C communications
  Serial.begin(9600);
  Wire.begin();
 
  //Put the HMC5883 IC into the correct operating mode
  Wire.beginTransmission(address); //open communication with HMC5883
  Wire.write(0x02); //select mode register
  Wire.write(0x00); //continuous measurement mode
  Wire.endTransmission();
}
 
void loop(){
 
  int x,y,z; //triple axis data

 
  
  //Enviamos el comando de pedir datos
  Wire.beginTransmission(address);
  Wire.write(0x03); //select register 3, X MSB register
  Wire.endTransmission();
 
  
 // Leemos los registros, (2 bytes cada uno)
  Wire.requestFrom(address, 6);
  if(6<=Wire.available()){
    x = Wire.read()<<8; //X msb
    x |= Wire.read(); //X lsb
    z = Wire.read()<<8; //Z msb
    z |= Wire.read(); //Z lsb
    y = Wire.read()<<8; //Y msb
    y |= Wire.read(); //Y lsb
  }
 
  // Imprimimos los datos
  Serial.print("x: ");
  Serial.print(x);
  Serial.print("  y: ");
  Serial.print(y);
  Serial.print("  z: ");
  Serial.println(z);

  // Convertimos los valors al rango de PWM
  int rojo=map(x,-500,500,0,255);
  int azul=map(y,-500,500,0,255);
  int verde=map(z,-500,500,0,255);
  
  analogWrite(10,rojo);
  analogWrite(11,azul);
  analogWrite(12,verde);
 
  delay(250);
}

