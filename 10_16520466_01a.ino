int count = 0;

int hitung = 0;

int counter;

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  for (counter = 0; counter < 3; ++counter) {
    digitalWrite(0, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(7, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(13, LOW);
    delay(5000); // Wait for 5000 millisecond(s)
    count += (0 + 1);
    Serial.print("hello world");
    Serial.println(count);
  }
}
