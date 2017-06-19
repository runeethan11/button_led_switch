int NewButtonState = LOW;
int OldButtonState = LOW;
int ButtonPin = 7;
int LedPin = 13;
int x = 1;

void setup()
{
  pinMode(ButtonPin, INPUT);
  pinMode(LedPin, OUTPUT);
}

void loop()
{
  //get the current state of the button
  int NewButtonState = digitalRead(ButtonPin);
  delay(25);
  
  //has the button gone high since we last read it?
  if (NewButtonState == HIGH && OldButtonState == LOW)
  {
    if (x == 0)
    {
      //toggle led on
      digitalWrite(LedPin, HIGH);
      x = 1;
    }
    else
    {
     //toggle off
     digitalWrite(LedPin, LOW);
     x = 0; 
    }
  }
  //Store the button's state so we can tell if it's changed next time around
  OldButtonState = NewButtonState;
}
