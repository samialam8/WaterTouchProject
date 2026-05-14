void setup()
{
    pinMode(D6, OUTPUT);
    pinMode(D5, OUTPUT);
}

void loop()
{
    digitalWrite(D6, HIGH);
    delay(300);

    digitalWrite(D6, LOW);
    delay(300);

    digitalWrite(D5, HIGH);
    delay(500);

    digitalWrite(D5, LOW);
    delay(500);
}