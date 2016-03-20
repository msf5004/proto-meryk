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

// the loop function runs over and over again forever
void loop() {
  int minDelay = 10;
  int maxDelay = 100;
  int timePerState = 100;
  int incDelay = 1;
  int delayValue = 0;
  int nRepeats = 0;
  
  // countup delay
  for (delayValue = minDelay; delayValue < maxDelay; delayValue += incDelay)
  {

    int nRepeats = timePerState / delayValue;
    for (int ctr = 0; ctr < nRepeats; ctr++)
    {
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(delayValue);        // wait for some time
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      delay(delayValue);        // wait for some time
    }
  }
  
  
  // countdown delay
  for (delayValue = maxDelay; delayValue > minDelay; delayValue -= incDelay)
  {  
    int nRepeats = timePerState / delayValue;
    for (int ctr = 0; ctr < nRepeats; ctr++)
    {
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(delayValue);        // wait for some time
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      delay(delayValue);        // wait for some time
    }
  }
}
