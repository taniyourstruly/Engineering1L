int ledPin3 = 3;
int button = 2; 
int i;

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin3, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  //if the button is pressed, it's HIGH
  if(buttonState==HIGH){ //if button is pressed
    digitalWrite(ledPin3,HIGH);
    delay(2000);
  }
  else{ //button is flashing
      digitalWrite(ledPin3,HIGH);
    if(buttonState==HIGH){
     digitalWrite(ledPin3,HIGH);
     delay(2000);
    }
     delay(250);
     digitalWrite(ledPin3,LOW);
    if(buttonState==HIGH){
      digitalWrite(ledPin3,HIGH);
      delay(2000);
    }
      delay(250);
    if(buttonState==HIGH){
      digitalWrite(ledPin3,HIGH);
      delay(2000);
    }
  }
}
