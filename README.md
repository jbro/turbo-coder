# Turbo Coder

![Turbo Coder](./hardware.jpg)

Turbo Coder is a simple hardware device that enables you to quickly accept Copilot suggestions in VSCode. It acts as a USB keyboard and sends CTRL+Right Arrow on single button press and Tab on long press.

## Hardware

The hardware is a any momentary push button, preferably a foot switch, connected to any Atmega32u4 based board like a Pro Micro or badUSB. The button is connected to digital pin 11 and ground.

The code is written in platformio and can be compiled and uploaded to the board using the platformio CLI.
