int ledPin = 2;
int button = 4; 
int presses=0;

int buttonState = 0;
int counter = 0;
boolean run = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (run) { //while true, should always run
    buttonState = digitalRead(button);

   if (counter==3) { //after button is pressed 3 times
    digitalWrite(ledPin, LOW);
    run = false; //turn off 
    }

    else if (buttonState==HIGH) {
      counter++; //count how many button presses there are
      delay(250);
      }

    else{
      digitalWrite(ledPin,HIGH);
      }
  }
  
}
