# AI Face Lock (IoT-based)

[cite_start]This project presents a smart door lock system that integrates **AI-driven face authentication** with **IoT hardware**[cite: 6]. [cite_start]The system leverages the high-performance processing power and camera of a smartphone to perform facial recognition via a dedicated mobile app[cite: 7, 30].

---

## 📌 Features
* [cite_start]**AI-Powered Security**: Utilizes sophisticated facial recognition to verify identity using the superior processing speed of a smartphone[cite: 19, 20].
* [cite_start]**IoT Connectivity**: Enables communication between the mobile app and microcontroller via a built-in web server or Bluetooth Low Energy (BLE)[cite: 35].
* [cite_start]**Real-time Monitoring**: Features a mobile interface to monitor data and control the lock system remotely via WiFi[cite: 43].
* [cite_start]**High Reliability**: Operates with rapid face recognition and instant hardware response to unlock commands[cite: 46].
* [cite_start]**Automated Access**: Upon successful authentication, the system activates a relay to trigger a solenoid lock[cite: 9, 36].
* [cite_start]**Data Logging**: Access events are logged in non-volatile memory to ensure data is preserved during power losses[cite: 37].

## 🛠️ Hardware Components
| Component | Description |
| :--- | :--- |
| **ESP32** | [cite_start]Main microcontroller used to control the system and manage wireless signals[cite: 23]. |
| **Relay Module** | [cite_start]Acts as a switch to control the power supply to the solenoid door lock[cite: 23, 39]. |
| **Solenoid Lock** | [cite_start]The physical locking mechanism triggered by the relay[cite: 36, 39]. |
| **BC107 Transistor** | [cite_start]Used as a switching component to drive or control circuits[cite: 23]. |
| **Buzzer** | [cite_start]Provides audible feedback during the unlocking process[cite: 56, 60]. |
| **Breadboard** | [cite_start]Used for assembling and testing the hardware implementation[cite: 23, 40]. |
| **Jumper Wires** | [cite_start]Used for connecting the electronic components[cite: 23]. |

## 💻 Software Stack
* [cite_start]**Arduino IDE**: The primary environment used to write, compile, and upload C/C++ code to the hardware[cite: 27, 28].
* [cite_start]**Mobile App (AI Engine)**: Runs facial recognition models and sends "Unlock" commands via WiFi[cite: 29, 30].

## 🚀 Methodology
1. [cite_start]**Detection**: The user opens the application and points the smartphone camera at their face[cite: 33].
2. [cite_start]**Recognition**: The app runs an AI model to match the face against a secure database[cite: 34].
3. [cite_start]**Communication**: Upon successful authentication, the app sends an encrypted command to the microcontroller[cite: 35].
4. [cite_start]**Action**: The hardware receives the command and activates the relay to pull the solenoid lock for a set duration[cite: 36].
