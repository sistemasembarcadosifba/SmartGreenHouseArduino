#ifndef NET_HPP
#define NET_HPP

#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>

#define SSID  ""
#define PASSWD ""

class Net {
  public:
    Net();
    void init();
    void sendTemp(float, float);
  private:
    String ssid = SSID;
    String password = PASSWD;
    String serverName = "http://192.168.0.6/SensorDataCollector/public/save_temp_data";
};

extern Net net; // Declaração da variável global 'net'

#endif
