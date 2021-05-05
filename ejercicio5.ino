
  int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin) //esta función devuelve un valor proporcional a la distancia medida
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);//inicia el puerto serial a 9600 baudios 

  pinMode(8, OUTPUT);//define el pin 8 como salida
  pinMode(7, OUTPUT);//define el pin 7 como salida
}

void loop()
{
  distancia = 0.01723 * readUltrasonicDistance(6, 5);  //guarda en la variable distancia el valor de la función readUltrasonicDistance
  if (distancia < 150) {   //si la distancia es menor a 150 cm
    digitalWrite(8, HIGH); //enciende el pin digital 8
    tone(7, 548668578, 1000);  //envia el pin 7 la frecuencia 548668578 en 1000 milesegundos 
  } else { //si no se cumple la condición del if anterior hago esto
    noTone(7); //apaga el parlante en el pin 7
    digitalWrite(8, LOW);  //apaga el pin digital 8
  }
  delay(10); //espera 10 milisegundos
}
