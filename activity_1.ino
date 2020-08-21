int ledPin4 = 4;
int ledPin2 = 2;
int ledPin3 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin4, HIGH);//frequency of 4 Hz
  digitalWrite(ledPin3, HIGH);//frequency of 2 Hz
  digitalWrite(ledPin2, HIGH);//frequency of 1 Hz
  delay(125);
  digitalWrite(ledPin4, LOW);
  delay(125);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin3, LOW);
  delay(125);
  digitalWrite(ledPin4, LOW);
  delay(125);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(125);
  digitalWrite(ledPin4, LOW);
  delay(125);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(125);
  digitalWrite(ledPin4, LOW);
  delay(125);
}
