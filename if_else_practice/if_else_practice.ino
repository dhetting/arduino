int led1 = 11;
int led2 = 12;
int button1 = 10;


void setup()

//pin 10 is button switch, also A0 recieves analog sensor value. 
//when button is pressed, A0 and pin 10 receives 5V and pin 12 turns on LED. 
//otherwise pin 11 LED is always on. 
//practice with if/else command.
{
  Serial.begin(9600);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (button1, INPUT);
}

void loop()
{                                                   // open loop function
  int sensorValue = analogRead (A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);
  Serial.println("I'm a goob!");
  delay(50);

  if (sensorValue <= 2)
    {                                              // open if-then-else statement
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
    }                                              // close if 
  else
    {                                              // open else
      digitalWrite (led1, LOW);
      digitalWrite (led2, HIGH);
    }                                              // close else
}                                                  // close loop function

