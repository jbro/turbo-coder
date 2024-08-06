# Turbo Coder

![Turbo Coder](./hardware.jpg)

Turbo Coder is a simple hardware device that enables you to quickly accept Copilot suggestions in VSCode. It acts as a USB keyboard and sends the OS specific shortcut for `Accept Next Word Of Inline Suggestion` on a single button press and Tab on long press.

The switch defaults to Mac OS shortcuts, but can be changed to Windows or Linux by holding the button while plugging in the device.

## Hardware

The hardware is a any momentary push button, preferably a foot switch, connected to any Atmega32u4 based board like a Pro Micro or badUSB. The switch is connected to digital pin 11 and ground.

The code is written in platformio and can be compiled and uploaded to the board using the platformio CLI.
