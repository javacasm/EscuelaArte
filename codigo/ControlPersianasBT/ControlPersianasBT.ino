int rele_motor=9;
void setup() {
  Serial.begin(9600);
  pinMode(rele_motor,OUTPUT);
}

void loop() {
  while(Serial.available()>0)
  {
    int iChar=Serial.read();
    Serial.println((char)iChar);
    if(iChar=='1')
      digitalWrite(rele_motor,HIGH);
    else
     digitalWrite(rele_motor,LOW);
  }
}
