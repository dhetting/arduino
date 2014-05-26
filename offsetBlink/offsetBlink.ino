

const int kPinLed13 = 13;
const int kPinLed12 = 12;
const int kPinLed11 = 11;
const int kPinLed10 = 10;
const int kPinLed09 =  9;

const int kDelayTime = 500;
const int kDelayTimeDec = 25;
int delayTime = kDelayTime;

void setup() {
  pinMode(kPinLed13, OUTPUT);
  pinMode(kPinLed12, OUTPUT);
  pinMode(kPinLed11, OUTPUT);
  pinMode(kPinLed10, OUTPUT);
  pinMode(kPinLed09, OUTPUT);
}

void loop() {
  delayTime = delayTime - kDelayTimeDec;

  // reset delay if we've reached 0
  if (delayTime <= 0)
    {
      delayTime = kDelayTime;
      digitalWrite(kPinLed09, HIGH);
      delay(delayTime);
      digitalWrite(kPinLed09, LOW);
    }

delay(delayTime/10);
digitalWrite(kPinLed13, HIGH);
delay(delayTime/10);
digitalWrite(kPinLed12, HIGH);
delay(delayTime/10);
digitalWrite(kPinLed11, HIGH);
delay(delayTime/10);
digitalWrite(kPinLed10, HIGH);

//delay(delayTime);
delay(delayTime/10);
digitalWrite(kPinLed13, LOW);
delay(delayTime/10);
digitalWrite(kPinLed12, LOW);
delay(delayTime/10);
digitalWrite(kPinLed11, LOW);
delay(delayTime/10);
digitalWrite(kPinLed10, LOW);
//digitalWrite(kPinLed09, LOW);

delay(delayTime);

}
