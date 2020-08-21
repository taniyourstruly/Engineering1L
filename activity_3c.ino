int ledPin1 = 3;
int ledPin2 = 4;
int button = 2; 
int i;

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  //if the button is pressed, it's HIGH
  digitalWrite(ledPin1, HIGH);
  if (buttonState==HIGH)
  {
    delay(500);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(5000);
    digitalWrite(ledPin2, LOW);
  }

}
