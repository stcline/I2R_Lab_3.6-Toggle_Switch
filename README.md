# Arduino 3.5-Digital Input
## In this assignment you will learn to use digital sensors as input devices.  

---

### Step One: Build the Circuit

Build your button circuit according to this schematic:

![Capture](https://user-images.githubusercontent.com/22602103/225357434-ab899c14-9027-4bbb-b78a-b80a8234c9cf.PNG)

Add a second circuit with a resistor and an LED.

### Step Two: Write the Code

Before you start, review the Arduino Reference page on [`digitalRead()`](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/).  You should also review [`Serial.println()`](https://www.arduino.cc/reference/en/language/functions/communication/serial/println/) and the [`if()` `else` conditionals](https://www.arduino.cc/reference/en/language/structure/control-structure/if/) as you will need to know how to print something and control an actuator based on the state of the button.

1. For starter code, use your previous work with the button.
2. Modify the code so your sketch does the following:
    - When the button is pressed, the Serial Monitor prints, "Button Pressed" and an LED flashes on and off quickly as long as the button is held down.
    - When the button is not pressed, the Serial Monitor prints, "Not Pressed" and the LED is off.
    - Keep running forever.

Use the video below as a reference.

### Step Three: Debug and Submit

https://user-images.githubusercontent.com/22602103/225373034-9fa0b0b0-31bc-40a0-bf88-38488d8eb100.mp4

Make sure your prototype behaves the same way as the one in the video. As in the previous assignment, make a new file here on GitHub. Name it 3.5_Digital_Input.ino and Commit it to the repository.  Submit a video of the working prototype on Canvas.


