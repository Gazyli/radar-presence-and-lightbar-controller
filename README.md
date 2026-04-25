# Custom ESPhome Devices for Home Assistant

This repository contains the hardware designs and custom firmware for two integrated smart home devices designed from scratch: a **mmWave radar presence sensor** and a **dual-channel CCT light controller**.

<img width="4080" height="3072" alt="sensor PCBs" src="https://github.com/user-attachments/assets/d9ef7a5a-ca0f-4014-a3eb-ebd542040d4c" />

## Overview

The two devices are built around the ESP32-C3 microcontroller and are designed to seamlessly integrate with Home Assistant via ESPHome. The presence sensor utilizes advanced mmWave radar technology for accurate spatial tracking, while the light controller offers precise control over brightness and color temperature for LED lighting setups. Both devices are designed with modular firmware configurations to allow for easy customization and deployment across multiple nodes in a smart home environment.

## Devices

### 1. mmWave Radar Presence Sensor
A highly sensitive presence detection node utilizing mmWave radar technology (supporting LD2410C and LD2450 sensors).
* **Features**: Real-time spatial tracking with custom zone/target math logic, combined with integrated environmental monitoring (temperature, humidity, light levels).
* **Hardware**: Custom PCBs designed in KiCad, powered by ESP32-C3 microcontrollers.
* **Firmware**: Modular ESPHome configuration leveraging custom C++ headers (`radar_math.h`, `zone_math.h`) for complex tracking.

### 2. Dual-Channel CCT Light Controller (Lightbar)
A precision lighting controller tailored for dual-channel (warm/cool white) LED strips.
* **Features**: Precise, flicker-free adjustment of brightness and color temperature (CCT). Also supports ambient light sensors (e.g., BH1750) for dynamic lighting capabilities. Powered with USB-PD.
* **Hardware**: Custom KiCad schematic and PCB layout for LED driving and ESP32 control.
* **Firmware**: ESPHome configurations optimized for smooth dimming logic and color temperature transitions.

## Project Structure

* **`ESPhome/`**: Contains all firmware configurations and code.
  * `common/`: Reusable YAML fragments (base ESP32 setups, sensor integrations) and custom C++ header files used across multiple identical device nodes.
  * `lightbar/`: Deployment-specific configurations for the CCT light controllers.
  * `presence/`: Deployment-specific configurations for the presence sensors.
* **`schematics/`**: KiCad project files (`.kicad_sch`, `.kicad_pcb`) containing the circuit designs for both the presence sensor and light controller variants.


