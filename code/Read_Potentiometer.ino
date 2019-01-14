/*
  Read Potentiometer
  Jordan Laurent, 2019

  Reads an analog potentiometer value on pin A0, then convert
  that value to a parameter based on what component you want
  to control.
*/

const int pot = A0; // Set the pin for your potentiometer
int potValue = 0;   // Set a starting value for the pot
// float potValue = 0;  // Set potValue as a FLOAT

void setup() 
{
  pinMode(pot, INPUT);    // Sets the pot as an INPUT
  // Serial.begin(9600);  // Uncomment for Serial Monitor!
}

void loop() 
{
  potValue = analogRead(pot);  
  map(potValue, 0, 1023, 0, 255);   // map to LED
  // map(potValue, 0, 1023, 0, 5000);  // map to 5 second delay
  // map(potValue, 0, 1023, 0.0, 1.0);  // map to volume control
  
  // Serial.println(potValue);  // Uncomment for Serial Monitor!
}
