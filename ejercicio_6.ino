// C++ code
//
int temperatura = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);
  if (temperatura > 35) {
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
