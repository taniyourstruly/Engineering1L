int ledPin = 2;
int button = 4; 
int i;

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  //if the button is pressed, it's HIGH
  if (buttonState==HIGH)
  {
    for (i = 0; i < 10; i++) //counter until 10
    {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500); //turns the LED on and off
    }
  }
  else
    digitalWrite(ledPin,LOW);
}
