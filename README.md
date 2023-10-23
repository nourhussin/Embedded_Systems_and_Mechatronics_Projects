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

## Project 2: DC Motor Control

This project contains the code and circuit diagrams for controlling the speed and direction of DC motors using an Arduino kit and various components. The lab consists of two tasks:

### Task 1: Controlling the Speed of Rotation of DC Motors

In this task, we will control the speed of rotation of a DC motor. The circuit uses a potentiometer to adjust the motor speed.

**Components and Tools**
- DC motor(9V)
- Arduino microcontroller (Arduino Uno)
- Breadboard and jumper wires
- PlatformIO for code development
- USB cable for Arduino programming
- 50k ohm potentiometer 
- 330-ohm resistor
- 2N2222 transistor
- 0.1uF polar capacitor
- Battery(9V)

**Circuit Diagram**

![Task 1 Circuit Diagram](/DC_Motor_Control/Task_1.png)

[Simulation Link](https://www.tinkercad.com/things/bmmSzlUvR90)

**Circuit Description**
- The circuit uses a potentiometer to control the speed of the DC motor.
- A 330Ω resistor limits the base current of the NPN transistor (2N2222).
- The motor is connected as a collector load to the transistor.
- Capacitor C1 is used to bypass voltage spikes and noise produced by the motor.



### Task 2: Controlling the Direction of Rotation of DC Motors

In this task, we will control the direction of rotation of a DC motor without reversing the battery polarity. The L293D chip is used to enable motor direction control.

**Components Required**
- Arduino kit
- Arduino cable
- Breadboard
- DC motor (9V)
- H-Bridge IC (e.g., L293/L293D)

**Circuit Diagram**

![Task 2 Circuit Diagram](/DC_Motor_Control/Task_2.png)

[Simulation Link](https://www.tinkercad.com/things/elqKAc5MXtl)

**Circuit Description**
- The circuit uses an H-Bridge IC (L293) to control the motor's direction.
- IN1 and IN2 pins of the IC are connected to Arduino pins 8 and 9 for direction control.
- Enable1 pin is connected to PWM pin 3 for motor speed control.

