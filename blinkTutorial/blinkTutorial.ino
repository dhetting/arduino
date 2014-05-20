// Program 1: Making an LED blink on and off

int LED = 13;

void setup() {
  
  pinMode(LED, OUTPUT);
  
}

void loop() {
  // dot
  digitalWrite(LED, LOW);
  delay(3000);  
  digitalWrite(LED, HIGH);
  delay(750);
  digitalWrite(LED, LOW);
  delay(750);
  // dot
  digitalWrite(LED, HIGH);
  delay(750);
  digitalWrite(LED, LOW);
  delay(750);
  // dot
  digitalWrite(LED, HIGH);
  delay(750);
  digitalWrite(LED, LOW);
  delay(750);
  // dash
  digitalWrite(LED, HIGH);
  delay(1250);
  digitalWrite(LED, LOW);
  delay(750);
  // dash
  digitalWrite(LED, HIGH);
  delay(1250);
  digitalWrite(LED, LOW);
  delay(750);
  // dash
  digitalWrite(LED, HIGH);
  delay(1250);
  digitalWrite(LED, LOW);
  delay(750);
  // dot
  digitalWrite(LED, HIGH);
  delay(750);
  digitalWrite(LED, LOW);
  delay(750);
  // dot
  digitalWrite(LED, HIGH);
  delay(750);
  digitalWrite(LED, LOW);
  delay(750);
  // dot
  digitalWrite(LED, HIGH);
  delay(750);
  digitalWrite(LED, LOW);
  delay(750);
}

