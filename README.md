# Arduino Button Toggle LED (C/C++)

## Overview
This project uses an Arduino-compatible board to toggle an LED using a push button. Each button press switches the LED between ON and OFF states.

## Features
- Reads button input using INPUT_PULLUP
- Implements edge detection (HIGH → LOW)
- Toggles LED state using a state variable
- Includes simple debounce logic

## Hardware
- Elegoo Mega R3 (Arduino-compatible)
- Push button (tactile switch)
- Breadboard
- Jumper wires

## How It Works
The system continuously reads the button state. When a press is detected, the LED state is toggled. Debouncing is used to prevent multiple triggers from a single press.

## Demo
![Demo] (button_toggle_demo.mp4)
