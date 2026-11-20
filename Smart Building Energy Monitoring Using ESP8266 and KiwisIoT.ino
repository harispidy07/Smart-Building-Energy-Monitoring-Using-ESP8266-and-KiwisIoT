#include <SoftwareSerial.h>
#include <PZEM004Tv30.h>
#include <KiwisIoT.h>

// Wi-Fi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

// PZEM UART connections
// ESP8266 RX = D5
// ESP8266 TX = D6
SoftwareSerial pzemSerial(D5, D6);

PZEM004Tv30 pzem(pzemSerial);

// Cloud update interval
unsigned long lastSend = 0;
const unsigned long SEND_INTERVAL = 5000;

void setup()
{
  Serial.begin(115200);

  pzemSerial.begin(9600);

  kiwisiot.begin();

  Serial.println("Smart Building Energy Monitoring Started");
}

void loop()
{
  kiwisiot.run();

  if (millis() - lastSend >= SEND_INTERVAL)
  {
    lastSend = millis();

    float voltage = pzem.voltage();
    float current = pzem.current();
    float power = pzem.power();
    float energy = pzem.energy();
    float frequency = pzem.frequency();
    float powerFactor = pzem.pf();

    if (!isnan(voltage) &&
        !isnan(current) &&
        !isnan(power) &&
        !isnan(energy))
    {
      Serial.println("------------------------");

      Serial.print("Voltage: ");
      Serial.print(voltage);
      Serial.println(" V");

      Serial.print("Current: ");
      Serial.print(current);
      Serial.println(" A");

      Serial.print("Power: ");
      Serial.print(power);
      Serial.println(" W");

      Serial.print("Energy: ");
      Serial.print(energy);
      Serial.println(" kWh");

      Serial.print("Frequency: ");
      Serial.print(frequency);
      Serial.println(" Hz");

      Serial.print("Power Factor: ");
      Serial.println(powerFactor);

      // Send measurements to KiwisIoT
      kiwisiot.send("0", String(voltage, 2));
      kiwisiot.send("1", String(current, 3));
      kiwisiot.send("2", String(power, 2));
      kiwisiot.send("3", String(energy, 3));
      kiwisiot.send("4", String(frequency, 2));
      kiwisiot.send("5", String(powerFactor, 2));
    }
    else
    {
      Serial.println("PZEM Reading Error");
    }
  }
}