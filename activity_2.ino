int ledPin = 3;
int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);//turns it on
  delay(5000);//5 second delay
  digitalWrite(ledPin,LOW);//turns it off
  delay(3000);//3 second delay
  for (i = 0; i < 10; i++)//counter from 1 to 10 and iterates 
                          //each second with two delay(500) functions in the loop
  {
      digitalWrite(ledPin,HIGH);
      delay(500);//half a second delay
      digitalWrite(ledPin,LOW);
      delay(500);
  }

}
