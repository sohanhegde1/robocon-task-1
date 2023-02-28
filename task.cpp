int motorLeftPin1 = 2;
int motorLeftPin2 = 3;
int motorRightPin1 = 4;
int motorRightPin2 = 5;


void setup() {
  pinMode(motorLeftPin1, OUTPUT);
  pinMode(motorLeftPin2, OUTPUT);
  pinMode(motorRightPin1, OUTPUT);
  pinMode(motorRightPin2, OUTPUT);
}

void loop() {
  
  digitalWrite(motorLeftPin1, LOW);
  digitalWrite(motorLeftPin2, LOW);
  digitalWrite(motorRightPin1, LOW);
  digitalWrite(motorRightPin2, HIGH);
  delay(1000);
  
 
  digitalWrite(motorLeftPin1, LOW);
  digitalWrite(motorLeftPin2, HIGH);
  digitalWrite(motorRightPin1, LOW);
  digitalWrite(motorRightPin2, LOW);
  delay(1000);

  digitalWrite(motorLeftPin1, HIGH);
  digitalWrite(motorLeftPin2, LOW);
  digitalWrite(motorRightPin1, HIGH);
  digitalWrite(motorRightPin2, LOW);
  delay(1000);
  

  digitalWrite(motorLeftPin1, LOW);
  digitalWrite(motorLeftPin2, HIGH);
  digitalWrite(motorRightPin1, LOW);
  digitalWrite(motorRightPin2, HIGH);
  delay(1000);
}

