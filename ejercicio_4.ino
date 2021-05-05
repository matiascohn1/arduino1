void setup()
{
  pinMode(7, INPUT);//define el pin 7 como entrada
  pinMode(6, INPUT);//define el pin 6 como entrada
  pinMode(2, OUTPUT);//define el pin 2 como salida
  pinMode(9, OUTPUT);//define el pin 9 como salida
  pinMode(8, OUTPUT);//define el pin 8 como salida
  pinMode(7, OUTPUT);//define el pin 7 como salida
}

void loop()
//esto lee cada pin y da la orden de prender y apagar el led
{
  if (digitalRead(7) == HIGH) {
     //si leo el pin 7 y esta en alto 
    if (digitalRead(6) == HIGH) {
      //si leo el pin 6 y esta en alto 
      digitalWrite(2, HIGH);
       //esto da el tiempo de  espera 
      tone(9, 548668578, 1000); //envia el pin 9 la frecuencia 548668578 en 1000 milesegundos 
    } else {//si no se cumple la funcion anterior pasa esto
      digitalWrite(2, LOW);//se apaga el pin 2
      noTone(9);//no envia el pin 9
    }
  } else {//si no se cumple la funcion anterior pasa esto
    digitalWrite(8, LOW);//se apaga el pin 8
    noTone(7);//no envia el pin 7
  }
  delay(10); // //espara 10 milesegundos
}
