#include "Temp.hpp"


// Constructor initializes the dht object
Temp::Temp() : dht(DHTPIN, DHTTYPE) {}


void Temp::init() {
  dht.begin();
}

void Temp::scan() {
  // Read humidity and temperature
  float humidity = dht.readHumidity();
  float tempC = dht.readTemperature();
  float tempF = dht.readTemperature(true);

  // Check if any reads failed
  if (isnan(humidity) || isnan(tempC) || isnan(tempF)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    // Compute heat index
    float heatIndexC = dht.computeHeatIndex(tempC, humidity, false);
    float heatIndexF = dht.computeHeatIndex(tempF, humidity);

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print("%  Temperature: ");
    Serial.print(tempC);
    Serial.print("°C ");
    Serial.print(tempF);
    Serial.print("°F  Heat index: ");
    Serial.print(heatIndexC);
    Serial.print("°C ");
    Serial.print(heatIndexF);
    Serial.println("°F");
    net.sendTemp(humidity, tempC);
  }

  
}
