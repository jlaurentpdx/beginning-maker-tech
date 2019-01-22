# Resources

[Breadboard Connections](http://brunswickhackerspace.com/wp-content/uploads/2016/10/breadboard.png)

[Resistor Color Codes: 4- and 5-band](http://brunswickhackerspace.com/wp-content/uploads/2016/10/breadboard.png)

[ELEGOO Start Kit Information + Tutorials](https://docs.google.com/document/d/1e7PoARO209aIGRqjKJAYFFS_Uzi2gXuj1JIoLI_I7FU/edit)

## Terms and definitions

* **Variables**: a method to store numerical information as a word, such as led = 13
  * **int**: a whole number value, such as 1, 13, or -5
* **Functions**: blocks of code that _do something_, identified by a specific word followed by two parentheses (examples below)
  * **void setup()**: a function that runs one time when the Arduino is powered on or reset
  * **void loop()**: a function that runs a block of code as fast as possible, up to hundreds or thousands of times per second, as long as the Arduino is ON
  * Function **arguments**: special values that are included inside parentheses when a function is used
  * **pinMode(_variable_, INPUT/OUTPUT)**: a function that tells the Arduino if a physical component will _receive_ (INPUT) or _send_ (OUTPUT) data from/to the real world
  * **digitalWrite(_variable_, HIGH/LOW)**: a function that sends a _1_ (HIGH) or _0_ (LOW) signal to a component, such as turning ON or OFF an LED
  * **delay(_time in milliseconds_)**: a function that delays the next instruction by a number of milliseconds; helpful for slowing down the process of the Arduino
* **Symbols**: special characters that tell our computer how to read certain lines of code
  * **""( )""**: opening and closing _parentheses_ follow a function name, and often include arguments for a function to use
  * **""{ }""**: opening and closing _curly brackets_ contain instructions for functions setup() and loop() as well as other special functions
  * **";"**: the _semicolon_ closes a line of code and informs the computer to move on to the next instruction
