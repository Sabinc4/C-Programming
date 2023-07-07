int ledPin1 = 8;      // First LED pin
int ledPin2 = 7;      // Second LED pin
int pushButton1 = 12; // First button pin
int pushButton2 = 13; // Second button pin
int pushButton3 = 10; // Third button pin

void setup() {
  pinMode(ledPin1, OUTPUT);   // Set the first LED pin as an output
  pinMode(ledPin2, OUTPUT);   // Set the second LED pin as an output
  pinMode(pushButton1, INPUT_PULLUP);  // Set the first button pin as an input with internal pull-up resistor
  pinMode(pushButton2, INPUT_PULLUP);  // Set the second button pin as an input with internal pull-up resistor
  pinMode(pushButton3, INPUT_PULLUP);  // Set the third button pin as an input with internal pull-up resistor
}

void loop() {
  if (!digitalRead(pushButton1)) {    // If the first button is pressed
    digitalWrite(ledPin1, HIGH);     // Turn on the first LED
    delay(1000);                      // Wait for 1 second
  } else {
    digitalWrite(ledPin1, LOW);      // Turn off the first LED if the button is not pressed
  }

  if (!digitalRead(pushButton2)) {    // If the second button is pressed
    digitalWrite(ledPin2, HIGH);     // Turn on the second LED
    delay(2000);                      // Wait for 2 seconds
  } else {
    digitalWrite(ledPin2, LOW);      // Turn off the second LED if the button is not pressed
  }

  if (!digitalRead(pushButton3)) {    // If the third button is pressed
    digitalWrite(ledPin1, HIGH);     // Turn on the first LED
    delay(3000);                      // Wait for 3 seconds
  }
}
