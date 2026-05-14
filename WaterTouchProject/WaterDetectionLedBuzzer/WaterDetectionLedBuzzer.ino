const int sensorPin = A0;
const int ledPin = D5;
const int buzzerPin = D6;

int threshold = 14;

void setup()
{
    Serial.begin(115200);

    pinMode(ledPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);

    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
}

void loop()
{
    int sensorValue = analogRead(sensorPin);

    Serial.print("ADC Value: ");
    Serial.println(sensorValue);

    if(sensorValue > threshold)
    {
        digitalWrite(ledPin, HIGH);
        digitalWrite(buzzerPin, HIGH);

        Serial.println("WATER DETECTED");
    }
    else
    {
        digitalWrite(ledPin, LOW);
        digitalWrite(buzzerPin, LOW);

        Serial.println("DRY");
    }

    delay(1000);
}