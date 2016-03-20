/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc
  This example code is in the public domain.
  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

void blink(int pin, int timeOn, int timeOff) {
  //sets pin high for timeOn, then low, and blocks for timeOff (all in ms)
  digitalWrite(pin, HIGH);
  delay(timeOn);
  digitalWrite(pin, LOW);
  delay(timeOff);
} //end blink

void blink(int pin, int timeOnOff) {
  //sets pin high for timeOn, then low, and blocks for timeOff (all in ms)
  digitalWrite(pin, HIGH);
  delay(timeOnOff);
  digitalWrite(pin, LOW);
  delay(timeOnOff);
} //end blink

// the loop function runs over and over again forever
void loop() {
  int minDelay = 10;
  int maxDelay = 50;
  int incDelay = 10;
  int timePerState = 100;
  
  int delayValue = 0;
  int LED1 = 13; //LED1 pin

    
  // countup delay
  for (delayValue = minDelay; delayValue < maxDelay; delayValue += incDelay)
  {  
    int nRepeat = timePerState / delayValue;
    for (int repeatCtr = 0; repeatCtr < nRepeat; repeatCtr++)
    {
      blink(LED1, delayValue, delayValue);
    }
  }
  
  
  // countdown delay
  for (delayValue = maxDelay; delayValue > minDelay; delayValue -= incDelay)
  {  
    int nRepeat = timePerState / delayValue;
    for (int repeatCtr = 0; repeatCtr < nRepeat; repeatCtr++)
    {
      blink(LED1, delayValue);
    }
  }
}
