//www.elegoo.com
//2016.12.9

#include <LiquidCrystal.h>
int tempPin = 0;
const int button = 2;     // Set your button's pin number here
bool lastButton = LOW;    // These three values allow us to read
bool currentButton = LOW; // whether the button IS pressed or WAS
bool toggle = false;      // pressed, then toggle an ON/OFF switch
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);


void setup()
{
  pinMode(button, INPUT);   // The button is set as an INPUT
  lcd.begin(16, 2);
}


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
  int tempReading = analogRead(tempPin);
  // This is OK
  double tempK = log(10000.0 * ((1024.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK );       //  Temp Kelvin
  float tempC = tempK - 273.15;            // Convert Kelvin to Celcius
  float tempF = (tempC * 9.0)/ 5.0 + 32.0; // Convert Celcius to Fahrenheit
  /*  replaced
    float tempVolts = tempReading * 5.0 / 1024.0;
    float tempC = (tempVolts - 0.5) * 10.0;
    float tempF = tempC * 9.0 / 5.0 + 32.0;
  */
  // Display Temperature in C
  lcd.setCursor(0, 0);
  lcd.print("1/21/19 20:48:45");
  lcd.setCursor(0, 1);
  
  currentButton = debounce(lastButton);  
  if (lastButton != currentButton)    // If the button was pressed,
  {   
    toggle = !toggle;                 // toggle the button's state
  }
  lastButton = currentButton;  // Change the button's previous state

  if (toggle)   // If button is ON...
  {
    // Display Temperature in C
    lcd.print("Temp         C  ");
    lcd.setCursor(6, 1);
    lcd.print(tempC);
  }
  else          // If button is OFF...
  {       
    // Display Temperature in F
    lcd.print("Temp         F  ");
    lcd.setCursor(6, 1);
    lcd.print(tempF);
  }
  delay(500);
}
