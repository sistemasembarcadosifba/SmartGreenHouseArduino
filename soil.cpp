#include "soil.hpp"

Soil::Soil(){
  //Construtor
}

void Soil::getData(){
  int moistureValue = analogRead(AOUT_PIN);
  Serial.print("Soil Moisture: ");
  Serial.println(moistureValue);
}