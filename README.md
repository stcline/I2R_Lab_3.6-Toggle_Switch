# Arduino 3.5-Digital Input
## In this assignment you will again use digital sensors as input devices.  In this example though, you will make a toggle switch.

---

### Step One: Build the Circuit

Build your button circuit according to this schematic:

![Capture](https://user-images.githubusercontent.com/22602103/225357434-ab899c14-9027-4bbb-b78a-b80a8234c9cf.PNG)

Add a second circuit with a resistor and an LED.

### Step Two: Write the Code

If needed, review the Arduino Reference page on [`digitalRead()`](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/).  You should also review [`Serial.println()`](https://www.arduino.cc/reference/en/language/functions/communication/serial/println/) and the [`if()` `else` conditionals](https://www.arduino.cc/reference/en/language/structure/control-structure/if/) as you will need to know how to print something and control an actuator based on the state of the button.

1. For starter code, use your previous work with the button.
2. Modify the code so your sketch does the following:
    - The button switches on or off when the button is pressed and it stays on or off.  This is a true toggle switch.
    - The Serial Monitor displays a message every time the LED state changes so that it says "ON" or "OFF" to match the LED.
    - 
Use the video below as a reference.

### Step Three: Debug and Submit

Make sure your prototype behaves the same way as the one in the video. As in the previous assignment, make a new file here on GitHub. Name it 3.5_Digital_Input.ino and Commit it to the repository.  Submit a video of the working prototype on Canvas.

