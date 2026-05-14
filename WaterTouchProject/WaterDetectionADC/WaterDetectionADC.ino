const int threshold = 14;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    int sensorValue = analogRead(A0);

    Serial.print("ADC: ");
    Serial.println(sensorValue);

    if(sensorValue >= threshold)
    {
        Serial.println("WATER DETECTED");
    }
    else
    {
        Serial.println("DRY");
    }

    delay(200);
}