// sketch 04-02
const int ledPin = 12;
const int delayPeriod = 75;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  flash(10, delayPeriod,ledPin);
  delay(1000);
}

void flash(int numFlashes, int d, int pinNum)
{
  for (int i = 0; i < numFlashes; i ++)
  {
    digitalWrite(pinNum, HIGH);
    delay(d);
    digitalWrite(pinNum, LOW);
    delay(d);
  }
}
