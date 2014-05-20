// Program 2: print to computer

void setup() {
  // open 9600 baud communication line to computer
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello");
  delay(1000);
  Serial.println("World");
  delay(1000);
}
