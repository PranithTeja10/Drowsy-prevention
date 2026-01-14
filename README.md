# 🚗 Drowsy Prevention Device

The **Drowsy Prevention Device** is an IoT-based embedded system designed to detect driver drowsiness in real time and alert the driver using an audible alarm. This project aims to reduce road accidents caused by fatigue and lack of alertness.

---

## 📌 Project Description

Driver drowsiness is a major cause of serious road accidents. This project uses an **eye blink (IR) sensor** to continuously monitor the driver's eye activity. The data is processed using an **ESP32 microcontroller**, and when prolonged eye closure is detected, a **buzzer alert** is triggered to wake the driver and restore focus.

The system is compact, low-cost, and suitable for real-time safety applications.

---

## 🎯 Objectives

- Detect driver drowsiness using eye blink patterns  
- Provide real-time alerts using a buzzer  
- Improve driver safety and reduce accident risk  
- Design a cost-effective and portable safety device  

---

## 🛠️ Hardware Components

- ESP32 Microcontroller  
- Eye Blink (IR) Sensor  
- Buzzer  
- Power Supply (Battery / USB)  
- Connecting Wires  

---

## 💻 Software Requirements

- Arduino IDE  
- Programming Language: C / C++  
- ESP32 Board Package  
- Sensor libraries  

---

## ⚙️ Working Principle

1. The eye blink sensor monitors the driver’s eye movements.
2. Sensor data is continuously sent to the ESP32.
3. The ESP32 compares eye closure duration with predefined thresholds.
4. If drowsiness is detected, the buzzer is activated.
5. The buzzer stops once normal blinking resumes.

---

## 🧠 Algorithm

1. Read sensor input  
2. Compare sensor value with threshold  
3. If threshold exceeded:
   - Activate buzzer
4. Wait and recheck
5. Reset buzzer when normal condition is detected  

---

## 📊 Results

- Achieved **85%–95% accuracy** in drowsiness detection  
- Fast response time suitable for real-time monitoring  
- Lightweight and wearable-friendly design  

---

## 🚀 Applications

- Personal vehicles  
- Commercial transport (trucks, buses)  
- Driver safety monitoring systems  
- Wearable safety devices  

---

## 🔮 Future Enhancements

- Adaptive threshold adjustment  
- IoT-based alert notifications  
- Mobile app integration  
- Machine learning-based detection  
- Additional biometric sensors (heart rate, camera-based detection)  

---

## 📄 Project Report

📘 **Complete Project Report (PDF):**  
[Download Project Report](REPORTS/Drowsy_Prevention_Device_Project_Report.pdf)

---

## 👨‍🎓 Project Information

- **Student Name:** P. Pranith Teja  
- **Roll Number:** 2311CS050039  
- **Department:** Computer Science & Engineering (Internet of Things)  
- **Institution:** Malla Reddy University  
- **Academic Year:** 2024–2025  
- **Project Guide:** Mrs. G. Divya Jyothi, Assistant Professor  

---

## 📚 References

1. IoT Based Driver Drowsiness Detection and Smart Alerting System  
2. Anti-Sleep Alarm for Drivers with Detector  
3. Eye Blink Detection for Drowsiness Prevention  
4. Khan et al. (2018) – Infrared Sensor Technology in Automotive Safety  

---

## ⭐ Acknowledgement

I sincerely thank my project guide and Malla Reddy University for their guidance and support throughout the development of this project.

---

⭐ If you find this project useful, please star the repository!
# Drowsy prevention
