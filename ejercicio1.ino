void setup()
//define el modo de cada pin como entrada o salida 
{
  pinMode(8, INPUT);//define el pin 8 como entrada 
  pinMode(7, OUTPUT);//define el pin 7 como salida
  pinMode(6, OUTPUT);//define el pin 6 como salida
}

void loop()
//esto lee cada pin y da la orden de prender y apagar el led
{
  if (digitalRead(8) == HIGH) {
    //si leo el pin 8 y esta en alto 
    
    digitalWrite(7, HIGH);//se prende el pin7
    digitalWrite(6, LOW);//se apaga el pin 6
  } else {
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  }
  delay(10); //espara 10 milesegundos
