const byte led[] = {3, 5, 6, 9, 10, 11}; // LEDs on PWM pins of the Uno
const int button = 2;
bool lastButton = LOW;
bool currentButton = LOW;
bool toggle = false;

void setup() {
  for (int i = 1; i < sizeof(led); i++){
    pinMode(led[i], OUTPUT);
  }
  pinMode(button, INPUT);

  Serial.begin(9600);
  randomSeed(analogRead(0));
}

int runRandom() {
  int i;
  int result;
  for(i = 0; i < 50; i++){
    randomLED(50);
  }
  for(i = 1; i <= 5; i++){
    result = randomLED(i * 100);
  }
  return result;
}

int randomLED(int del)
{
 int r = random(0,6);  // get a random number from 1 to 6
 analogWrite(led[r], 10); // output to the matching LED on digital pin 1-6
 if (del > 0) {
  delay(del);         // hold the LED on for the delay received
 } else if (del == 0){
  do {}
  while (1);
 }
 digitalWrite(led[r], LOW); // turn off the LED
 return r;
}

bool debounce(bool last) {
  bool current = digitalRead(button);
  if(last != current){
    delay(5);
    current = digitalRead(button);
  }
  return current;
}

void loop() {
  currentButton = debounce(lastButton);
  if (lastButton != currentButton){
    toggle = !toggle;
  }
  lastButton = currentButton;

  if (toggle){
    digitalWrite(led, LOW);
    int result = runRandom();
    analogWrite(led[4], 255);
    Serial.println(result+1);
  } 
}
