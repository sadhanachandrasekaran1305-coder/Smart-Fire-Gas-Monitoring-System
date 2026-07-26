=> Smart Fire & Gas Monitoring System using ESP32

##  Project Overview
The Smart Fire & Gas Monitoring System is an IoT-based safety project developed using ESP32. It continuously monitors temperature, humidity, and smoke levels using sensors. When smoke exceeds the safe threshold, the system activates a buzzer to alert users, helping prevent fire-related accidents.

##  Objectives
-> Detect smoke and potential fire hazards.
-> Monitor temperature and humidity in real time.
-> Alert users through a buzzer when smoke is detected.
-> Provide a simple and low-cost safety monitoring solution.

##  Components Used
-> ESP32
-> DHT22 Temperature & Humidity Sensor
-> MQ-2 Smoke/Gas Sensor
-> Buzzer
-> Wokwi Simulator
-> Arduino Framework

##  Working
1. ESP32 reads temperature and humidity from the DHT22 sensor.
2. ESP32 reads smoke values from the MQ-2 sensor.
3. Sensor values are displayed through the Serial Monitor.
4. If the smoke value exceeds the threshold, the buzzer is activated and an alert message is displayed.
5. The system continuously monitors the environment.

##  Software Used
-> Wokwi Simulator
-> Arduino IDE
-> GitHub

##  Sample Output

```
Fire & Gas Monitoring System Started...
Temperature: 24.00 °C
Humidity: 40.00 %
Smoke Value: 2518
## ALERT! Smoke Detected!
```

##  Future Enhancements
-> Blynk Mobile App Integration
->Cloud Data Storage
-> Mobile Notifications
-> LCD/OLED Display
-> Real Hardware Implementation

##  Team
Developed for **Smart India Hackathon (SIH) 2026**.
