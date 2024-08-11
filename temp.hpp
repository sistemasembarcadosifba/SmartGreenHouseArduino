#ifndef TEMP_HPP
#define TEMP_HPP

#include <DHT.h>
#include <Arduino.h>
#include "net.hpp"

#define DHTPIN 5         // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11    // DHT 11


class Temp {
  public:
    Temp();
    void scan();
    void init();
  private:
    DHT dht;
    Net net;
};

#endif // TEMP_HPP
