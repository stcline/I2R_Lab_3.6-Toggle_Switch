// This sketch is based on Paul McWhorter's tutorial "ARDUINO TUTORIAL 28: USING A PUSHBUTTON AS A TOGGLE SWITCH"

int LEDState=0;    // This variable stores the current state of the LED - start it a off
int LEDPin=  ;     // The LED pin you are using
int buttonPin=  ;  // The button pin you are using
int buttonNew;     // The new button state
int buttonOld=1;   // The former button state 
int dt=100;        // Put in a small delay

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, );
pinMode(buttonPin, );

}

void loop() {
buttonNew=digitalRead();
if(buttonOld==0 && buttonNew==1){  // This condition is true if the previous button state was off and the new one is on
  if (LEDState==0){
    digitalWrite(LEDPin, );  // Turn on the LED
    LEDState=1;              // Set the current LED state to on
  }
  else{
    digitalWrite(LEDPin, );  // Turn off the LED
    LEDState=0;
  }
}
buttonOld=buttonNew;
delay(dt);                    // Slow things down a little bit - try different values here
}
