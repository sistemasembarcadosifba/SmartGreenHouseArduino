#include "Temp.hpp"
#include "net.hpp"
#include "soil.hpp"

Temp temp; // Create an instance of Temp
Net net;
Soil soil;

void setup() {
  Serial.begin(9600);
  temp.init();
  net.init();
}

void loop() {
  temp.scan();
  soil.getData();
  delay(10000);
}
