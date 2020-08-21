#include <Servo.h>

Servo myservo;
// position of the servo motor
int pos = 0;
// pin locations on the arduino of the LEDs and pushbutton
int ledPinPink = 7;
int ledPinGreen = 9;
int button = 3;
// variables to keep track of the button and direction
int buttonPressed = 2;
boolean cw = true;

void setup() {
  // setup code here, to run once:
  // set up the pins for inputs and outputs
  pinMode(ledPinPink, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(button, INPUT);
  // start
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // check if button is pressed
  int buttonState = digitalRead(button);
  delay(400);

  // once the button is pressed, then it signals the program to change
  // to either counterclockwise or clockwise via a boolean variable that 
  // keeps track of which direction it is (clockwise or counterclockwise)
  // and then it only turns in that direction for 180 degrees to either 
  // open the flower or close the flower
  if(buttonState == HIGH)
  {
      // if it's clockwise, then the varible for buttonPressed is 1
      // if it's counterclockwise, then the variable for buttonPressed is 0
      // buttonPressed signals the later code to run the servo motor
      if(cw) buttonPressed = 1;
      else buttonPressed = 0;
      // changes direction
      cw = !cw;
      Serial.print(buttonPressed);
  }

  // if the button is pressed and buttonPressed is 1, then the light turns pink
  // and the servo motor rotates counterclockwise
  if(buttonPressed == 1)
  {
    // servo is connected
    // the pink LED is turned on and the green LED is turned off
    myservo.attach(2);
    
    

    for (pos = 180; pos > 135; pos--)
    {
       myservo.write(pos);
       delay(60);
       digitalWrite(ledPinPink, HIGH);
       digitalWrite(ledPinGreen, LOW);
    }
    for (pos = 0;pos < 45; pos++)
    {
       myservo.write(pos);
       delay(60);
       digitalWrite(ledPinGreen, HIGH);
       digitalWrite(ledPinPink, LOW);
    }
    myservo.detach();
    delay(1000);
    //buttonPressed = 2;
  }
  // if the button is pressed and buttonPressed is 0, then the light turns green
  // and the servo motor rotates clockwise
  else if(buttonPressed == 0)
  {
    // the green LED is turned on and the pink LED is turned off
    // servo is detached so it doesn't run
    myservo.detach();
    digitalWrite(ledPinPink, LOW);
    digitalWrite(ledPinGreen, HIGH);

    
    
    // change buttonPressed to 2 to exit out of the conditional statements 
    // to end the servo motor's motion
    buttonPressed = 2;
  }
}

