/*
 * Week 7: Blink Without Delay
 * By Taylor Malligan
 */

//variables
const int led = 13; //the number of the LED pin
int buttonState = HIGH; //state for the LED, initialized it to HIGH
long previousMillis = 0; //LED timer to see when it was stored last
long blink = 1000; //blink interval - using 1000 as its measured in milliseconds

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis(); //current blinker

  if (currentMillis - previousMillis > blink) {
    previousMillis = currentMillis;
    if(buttonState == HIGH){
      buttonState = LOW;
    }
    else {
      buttonState == HIGH;
    }
    digitalWrite(led, buttonState);
  }
}
