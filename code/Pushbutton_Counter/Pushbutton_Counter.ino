/* 
  Pushbutton Toggle
  Jordan Laurent, 2019
   
  To make sure that all parts of this work correctly, copy 
  the following:
   
   - Variables at the TOP of your sketch
   - Contents of void setup() into void setup()
   - The bool debounce(bool last) function ALONE
   - Contents of void loop() into void loop()
   
  ...then, under "if(toggle)" on Line 57, make your sketch turn 
  a component ON - under "} else {", turn it OFF.      
*/

const int button = 2;     // Set your button's pin number here
bool lastButton = LOW;    // These three values allow us to read
bool currentButton = LOW; // whether the button IS pressed or WAS
bool toggle = false;      // pressed, then toggle an ON/OFF switch
byte counter = 0;


void setup() 
{ 
  pinMode(button, INPUT);   // The button is set as an INPUT  
  Serial.begin(9600);
}


/*
  Make sure that bool debounce() is NOT copied under the void 
  setup() or void loop() functions! The following code allows 
  us to check if our button was recently pressed.
*/ 

    
bool debounce(bool last) 
{
  bool current = digitalRead(button); 
  if(last != current)
  {
    delay(5);
    current = digitalRead(button);
  }
  return current;
}


void loop() 
{  
  currentButton = debounce(lastButton);  
  if (lastButton != currentButton && lastButton == LOW)    // If the button was pressed,
  {   
    toggle = !toggle;                 // toggle the button's state
  }
  lastButton = currentButton;  // Change the button's previous state

  if (toggle)   // If button is ON...
  {
    // Turn something on!
  } 
  else          // If button is OFF...
  {       
    // Turn something OFF!
  }

  Serial.println(toggle);

}
