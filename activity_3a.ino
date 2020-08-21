
int ledPin3 = 7;
int button = 3;
 

//int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin3, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //if the button is pressed, it's HIGH
  if (digitalRead(button)==HIGH)
  {
    digitalWrite(ledPin3, HIGH);
    delay(3000);
    //digitalWrite(ledPin3,LOW);
    
  }
  else{
    digitalWrite(ledPin3,LOW);
  }
}
