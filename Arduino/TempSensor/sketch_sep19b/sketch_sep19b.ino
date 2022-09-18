#include "Arduino_SensorKit.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Environment.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("temperature = ");
  Serial.print(Environment.readTemperature());
  Serial.println(" C");
  delay(2000);
}
