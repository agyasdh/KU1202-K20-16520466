int counter;

void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  for (counter = 0; counter < 3; ++counter){
    digitalWrite(7, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(7, LOW);
    delay(1000);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}