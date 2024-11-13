// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(5, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
}