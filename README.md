# Embedded Systems and Mechatronics Projects Repository

This repository contains a collection of projects completed as part of the Embedded Systems and Intro to Mechatronics courses during 3rd year communication and electronics engineering. These projects encompass a range of topics and applications within the field of electrical and computer engineering.

## Table of Contents
1. Arduino-Based Adaptive Traffic Light System Emulator

## Project 1: Arduino-Based Adaptive Traffic Light System Emulator

**Description:**

This project is an Arduino-based adaptive traffic light system emulator inspired by real-world traffic management. The goal is to simulate a traffic light system that dynamically adjusts its signals based on the number of "cars" waiting in line. While the project won't be deployed on a real street, it provides a practical way to explore embedded systems and control logic.

**Key Features:**

- The traffic light system starts with the Red signal active.
- It transitions to Green when the number of "cars" waiting in line exceeds a configurable threshold value (X).
- The duration of the Green signal (Y) is calculated based on the number of "cars" emulated, mimicking real-world traffic flow.
- Car presence is emulated using a push button.

**Components and Tools:**

- Arduino microcontroller (Arduino Uno)
- Traffic light LEDs (Red, Yellow, Green)
- Push button for car emulation
- Breadboard and jumper wires
- Arduino IDE for code development
- USB cable for Arduino programming

**Project Simulation**

![Circuit Simulation](/Arduino_Based_Adaptive_Traffic_Light_System_Emulator/Circuit_Simulation.png)

[Simulation Link](https://www.tinkercad.com/things/jjNpAYC9FdP)

**Project Implementation:**

1. Set up the necessary hardware components, including the traffic light LEDs and the chosen car presence emulation method (push button).

2. Develop Arduino code to control the traffic light system with the following functionalities:
   - Initialize pins and variables.
   - Read input from the push button to simulate car presence.
   - Keep track of the number of "cars" waiting in line.
   - Check if the car count exceeds the configured threshold (X).
   - Calculate the duration (Y) for the Green signal based on car count and a predefined constant (p).
   - Control the traffic light signals (Red, Green, Yellow) based on car count and timing.


3. Upload the developed code to the Arduino microcontroller.

4. Test the system by emulating car presence using the push button. Observe how the traffic light adapts its signals based on the number of "cars."

**Project Benefits:**

- Gain hands-on experience with Arduino microcontrollers and sensor interfacing.
- Understand the concept of adaptive traffic light systems.
- Experiment with different threshold values (X) and car presence emulation methods.
- Enhance knowledge of embedded systems and control logic.

**Note:** Ensure safety precautions are taken when working with electronics and emulating car presence. This project is for educational purposes and not intended for real-world traffic control.

