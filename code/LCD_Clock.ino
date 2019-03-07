#include <DS3231.h>
#include <LiquidCrystal.h> // includes the LiquidCrystal Library

const int pinSDA = 1; // Set the pin for RTC SDA
const int pinSCL = 0; // Set the pin for RTC SCL

const int rs = 13;    // Set up pins for LCD screen
const int enable = 12;
const int d4 = 11;
const int d5 = 10;
const int d6 = 9;
const int d7 = 8;

DS3231 rtc(pinSDA, pinSCL);
LiquidCrystal lcd(rs, enable, d4, d5, d6, d7);

void setup()
{
  lcd.clear();      // Clear the LCD screen
  rtc.begin();      // Initialize the DS3231 RTC
  lcd.begin(16,2);  // Initialize the LCD screen and set the columns and rows

  //rtc.setTime(13,57,15);  // Uncomment this line to reset the time
  //rtc.setDate(3,7,2019);  // Uncomment this line to reset the date
}

void loop()
{
  lcd.setCursor(0,0);   // Set the cursor at column 0, row 0
  lcd.print("Time:  ");
  lcd.print(rtc.getTimeStr());  // Print the time

  lcd.setCursor(0,1);   // Set the cursor at column 0, row 1
  lcd.print("Date: ");
  lcd.print(rtc.getDateStr());  // Prints the date

  delay(1000);  // Delay for one second
}
