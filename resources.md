# Resources

## Software Downloads
* [Arduino IDE](https://www.arduino.cc/en/Main/Software)
* [Adobe Illustrator](https://www.adobe.com/downloads.html)(Free trial or paid license)
* [Inkscape](https://inkscape.org/release/inkscape-0.92.4/)(Free Illustrator alternative)
* [Fusion 360](https://www.autodesk.com/products/fusion-360/students-teachers-educators)(Free license for students)

## Fundamental Electronics
[Breadboard Connections](http://brunswickhackerspace.com/wp-content/uploads/2016/10/breadboard.png)<br>
[Resistor Color Codes: 4- and 5-band](https://www.build-electronic-circuits.com/wp-content/uploads/2016/07/resistor-color-codes.jpg)<br>
[ELEGOO Starter Kit Information + Tutorials](https://docs.google.com/document/d/1e7PoARO209aIGRqjKJAYFFS_Uzi2gXuj1JIoLI_I7FU/edit)

## Coding Terms and Definitions

* **Variables**: a method to store numerical information as a word, such as led = 13
  * **int**: a whole number value, such as 1, 13, or -5
  * **float**: a decimal value (also called a _floating point number_), such as 1.5, 3.14, or -6.0
* **Functions**: blocks of code that _do something_, usually defined by their name; identified by a specific word followed by two parentheses (examples below)
  * **void setup()**: a function that runs one time when the Arduino is powered on or reset
  * **void loop()**: a function that runs a block of code as fast as possible, up to hundreds or thousands of times per second, as long as the Arduino is ON
  * Function **arguments**: special values that are included inside parentheses when a function is used
  * **pinMode(_variable_, INPUT/OUTPUT)**: a function that tells the Arduino if a physical component will _receive_ (INPUT) or _send_ (OUTPUT) data from/to the real world
  * **digitalWrite(_variable_, HIGH/LOW)**: a function that sends a _1_ (HIGH) or _0_ (LOW) signal to a component, such as turning ON or OFF an LED
  * **delay(_time in milliseconds_)**: a function that delays the next instruction by a number of milliseconds; helpful for slowing down the process of the Arduino
  * **digitalRead(_variable_)**: reads the value of a digital input, such as a Pushbutton
  * **analogWrite(_variable_, _value_)**: sends a specific value to an output pin, usually a PWM, that emulates an analog output; often used to fade LEDs
  * **analogRead(_variable_)**: receives input from an analog device, such as a potentiometer, joystick, or photoresistor
* **Symbols**: special characters that tell our computer how to read certain lines of code
  * **""( )""**: opening and closing _parentheses_ follow a function name, and often include arguments for a function to use
  * **""{ }""**: opening and closing _curly brackets_ contain instructions for functions setup() and loop() as well as other special functions
  * **";"**: the _semicolon_ closes a line of code and informs the computer to move on to the next instruction

## Arduino Copy-Paste Code

* [Read Potentiometer](https://raw.githubusercontent.com/jlaurentpdx/beginning-maker-tech/gh-pages/code/Read_Potentiometer.ino)
* [Pushbutton Toggle](https://raw.githubusercontent.com/jlaurentpdx/beginning-maker-tech/gh-pages/code/Pushbutton_Toggle.ino)
