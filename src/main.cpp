#include <Arduino.h>
#define LDR_PIN A0

void setup()
{
    Serial.begin(9600);
    while (!Serial); //Important for uno r4 wifi
}

void loop()
{
    int ldrRaw = analogRead(LDR_PIN);
    //Map to percentage
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);
    Serial.print("LDR RAW: ");
    Serial.print(ldrRaw);
    Serial.print("| LIGHT: ");
    Serial.print(lightPercent);
    Serial.println("%");
    delay(500);
}