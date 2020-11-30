
int MPIN1 = 10;
int MPIN2 = 9;
void setup()
{                
  // initialize the digital pin as an output.
  pinMode(MPIN1, OUTPUT);
  pinMode(MPIN2, OUTPUT);
}

void loop()
{
  digitalWrite(MPIN1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(MPIN2, LOW); 
  delay(1000);               // wait for a second
  digitalWrite(MPIN1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(MPIN2, HIGH); 
  delay(1000);               // wait for a second
}
