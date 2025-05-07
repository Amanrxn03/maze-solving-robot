# Amandeep_Pradhan_AI-ML_D_MSR
# MSR - Maze Solving Robot

**Team Members:**  
- Amandeep Pradhan - 2401730233 
- Bishnu Kumar - 2401730230 
- B.Tech CSE AI & ML, Section D | Semester 2

---

## 📜 Project Descriptio
** MSR (Maze Solving Robot)** is an autonomous robotic vehicle designed to navigate and solve complex mazes without human intervention. Developed using an Arduino Uno microcontroller, the robot uses three ultrasonic sensors for distance measurement and obstacle detection, and four geared DC motors controlled via an L298N motor driver for movement.

The robot operates on a basic decision-making algorithm that analyzes real-time sensor data to determine the best path. It continuously scans for obstacles and chooses directions based on available paths, mimicking the behavior of intelligent agents. This project demonstrates the principles of embedded systems, sensor integration, motor control, and basic pathfinding algorithms such as the left-hand rule or right-hand rule.

---

## 🎥 Project Video
[▶️ Watch the Explanation Video] (https://drive.google.com/file/d/1kkx3lf7sImKWuL8rs6aziDH8JUzF6IU6/view?usp=sharing)

---

## 🛠️ Technologies Used
- **Languages:** C++ (Robotics, Hardware)
- **Libraries & Frameworks:**
  - NewPing.h

    Used for controlling ultrasonic sensors efficiently.
    More accurate and faster than basic pulse timing with digitalRead() and pulseIn().

  - AFMotor.h (if you're using Adafruit motor shield)

    For controlling motors via Adafruit Motor Shield.
    Not required if you're using L298N driver.

  - Arduino.h (Included by default)

    Base Arduino functions like digitalWrite, delay, pinMode, etc.

- **Hardware:**
  - Arduino Uno (Movement Control)
  - L298N Motor Driver Module
  - 3x Ultrasonic Sensors
  - 4x Gear Motors with Wheels
  - Battery Pack
  - Chassis Frame
  - Jumper Wires and Breadboard
  
 
---

## 🚀 How to Run the Project

1. Connect the Hardware

  * Motor Connections (via L298N):
  * IN1, IN2, IN3, IN4 to Arduino digital pins (e.g., 8, 9, 10, 11)
  * ENA, ENB to 5V (or use PWM for speed control)
  * Motor A and Motor B outputs to motors
  * Power supply to 12V input (or appropriate for your battery)


Ultrasonic Sensors:

  * Each sensor has 4 pins: VCC, GND, TRIG, ECHO
  * Front Sensor → e.g., TRIG = pin 6, ECHO = pin 7
  * Left Sensor → e.g., TRIG = pin 2, ECHO = pin 3
  * Right Sensor → e.g., TRIG = pin 4, ECHO = pin 5



---

2. Install Arduino Libraries

   * Open Arduino IDE
   * Go to Sketch > Include Library > Manage Libraries
   * Search and install:
        
      - NewPing library
      - Servo (if using servo)

    (No library needed for L298N if manually coded)




---

4. Upload the Code
5. Power the Robot

   * Connect the battery pack to the L298N power input (NOT directly to Arduino if >9V).
   * Ensure common GND between Arduino and L298N.



---

6. Test and Debug

  * Place the robot in a simple maze.
  * Use the Serial Monitor to print distances (optional).
  * Adjust delays and logic for smoother turns.



---
