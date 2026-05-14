void setup()
{
    pinMode(D6, OUTPUT);
}

void loop()
{
    digitalWrite(D6, HIGH);
    delay(300);

    digitalWrite(D6, LOW);
    delay(300);
}