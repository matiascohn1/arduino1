void setup()
//define el modo de cada pin como entrada o salida 
{
  pinMode(7, OUTPUT);//define el modo de cada pin como entrada o salida 
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
//esto lee cada pin y da la orden de prender apagar el led
{
  digitalWrite(7, HIGH);//esto lee cada pin y prende o paga el led
  digitalWrite(2, HIGH);
  //esto da el tiempo de  espera 
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
    //esto da el tiempo de  espera 
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
    //esto da el tiempo de  espera 
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
    //esto da el tiempo de  espera 
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
}
