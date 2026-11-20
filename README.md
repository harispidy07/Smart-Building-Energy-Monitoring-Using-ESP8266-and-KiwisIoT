# Smart Building Energy Monitoring Using ESP8266 and KiwisIoT

## Project Overview

The Smart Building Energy Monitoring System is an IoT-based solution designed to monitor electrical current, temperature, humidity, and motion inside a building using ESP8266 and KiwisIoT.

The system uses an ACS712 current sensor to monitor electrical current, a DHT11 sensor to measure temperature and humidity, and a PIR sensor to detect motion. The ESP8266 NodeMCU collects sensor data and transmits it wirelessly to the KiwisIoT dashboard.

This project helps users monitor electrical loads and indoor environmental conditions through a real-time IoT dashboard.

## Features

- Real-time electrical current monitoring using ACS712
- Temperature monitoring using DHT11
- Humidity monitoring
- Motion detection using PIR sensor
- Basic occupancy status monitoring
- Wireless connectivity using ESP8266
- Cloud-based monitoring using KiwisIoT
- Real-time dashboard visualization
- Serial Monitor support for debugging

## Hardware Requirements

- ESP8266 NodeMCU
- ACS712 30A Current Sensor
- DHT11 Temperature and Humidity Sensor
- PIR Motion Sensor
- Jumper Wires
- USB Cable
- Suitable power supply and electrical load for testing

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- DHT Sensor Library
- KiwisIoT Arduino Library

## Working Principle

The ACS712 current sensor measures the current flowing through a connected electrical load. The DHT11 sensor measures the surrounding temperature and relative humidity, while the PIR sensor detects movement within its detection range.

The ESP8266 NodeMCU collects the sensor readings, processes the data, and sends the information to KiwisIoT over Wi-Fi.

The KiwisIoT dashboard displays current, temperature, humidity, motion status, and basic building occupancy status, allowing users to remotely monitor the building's electrical and environmental conditions.

## Applications

- Smart building monitoring
- Home energy monitoring
- Office monitoring systems
- Electrical load monitoring
- Indoor environmental monitoring
- IoT-based building automation
- Smart facility management

## KiwisIoT Integration

KiwisIoT is used as the cloud platform to visualize and monitor sensor data remotely.

The dashboard monitors the following parameters:

- Current – Electrical current measurement
- Temperature – Indoor temperature
- Humidity – Relative humidity
- Motion Status – Motion detection information
- Building Status – Basic occupancy indication

### KiwisIoT Resources

Website: https://www.kiwisiot.in/

Arduino Library: https://github.com/Kiwistron/KiwisIoT

IoT Project Examples: https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

## Installation and Setup

Install the ESP8266 board package in Arduino IDE.

Install the required DHT sensor and KiwisIoT libraries.

Connect the ACS712, DHT11, and PIR sensors to the ESP8266 NodeMCU according to the project circuit diagram.

Configure your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino program.

Upload the program to the ESP8266 NodeMCU.

Configure the dashboard channels and widgets in KiwisIoT.

Power the system and monitor the current, temperature, humidity, motion, and building status through the dashboard.

## Safety Note

The ACS712 current sensor must be connected correctly according to the electrical load and sensor specifications. For initial testing, use a low-voltage DC load. Never work directly with mains voltage without proper isolation, electrical protection, and qualified supervision.

## Project Documentation

Project documentation and implementation details can be added here.

## Author

**Hariprasath S**

IoT | Embedded Systems | Smart Automation | Digital Twin Development
