#include <Arduino.h>
#include "AITRIP_Moisture.h"
#include <LiquidCrystal_I2C.h>


AITRIP_Moisture sensor1(A0);
//AITRIP_Moisture sensor2(A1);
//AITRIP_Moisture sensor3(A2);
//AITRIP_Moisture sensor4(A3);
//AITRIP_Moisture sensor5(A4);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int s1 = sensor1.analogValue();
  int S1 = sensor1.moisturePercent();
  
  Serial.print("Analog Value: ");
  Serial.println(s1);
  Serial.print("Moisture Percent: ");
  Serial.println(S1);
  delay(1000);
}