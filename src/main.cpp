#include <Arduino.h>
int ldrPin=A0;
void setup() {
    Serial.begin(9600);
}

void loop() {
    int ldrValue=analogRead(ldrPin);
    int lightPercent=map(ldrValue,0,1023,0,100);
    Serial.print("LDR Raw");
    Serial.println(ldrValue);
    Serial.print(" |  Light Percent");
    Serial.print(lightPercent);
    Serial.println("%");
    delay(300);
}