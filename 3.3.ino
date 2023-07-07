int ledPin1 = 5;     // First LED pin
int ledPin2 = 4;     // Second LED pin
int ledPin3 = 3;     // Third LED pin
int ledPin4 = 2;     // Fourth LED pin
int pushButton1 = 13;    // First button pin
int pushButton2 = 12;    // Second button pin
int pushButton3 = 11;    // Third button pin
int pushButton4 = 10;    // Fourth button pin
int pushButton5 = 9;     // Fifth button pin
int pushButton6 = 8;     // Sixth button pin
int pushButton7 = 7;     // Seventh button pin
int pushButton8 = 6;     // Eighth button pin

void setup()
{
  pinMode(ledPin1, OUTPUT);     // Set the first LED pin as an output
  pinMode(pushButton1, INPUT_PULLUP);   // Set the first button pin as an input with internal pull-up resistor
  pinMode(ledPin2, OUTPUT);     // Set the second LED pin as an output
  pinMode(pushButton2, INPUT_PULLUP);   // Set the second button pin as an input with internal pull-up resistor
  pinMode(ledPin3, OUTPUT);     // Set the third LED pin as an output
  pinMode(pushButton3, INPUT_PULLUP);   // Set the third button pin as an input with internal pull-up resistor
  pinMode(ledPin4, OUTPUT);     // Set the fourth LED pin as an output
  pinMode(pushButton4, INPUT_PULLUP);   // Set the fourth button pin as an input with internal pull-up resistor
  pinMode(ledPin1, OUTPUT);     // Set the fifth LED pin as an output
  pinMode(pushButton5, INPUT_PULLUP);   // Set the fifth button pin as an input with internal pull-up resistor
  pinMode(ledPin2, OUTPUT);     // Set the sixth LED pin as an output
  pinMode(pushButton6, INPUT_PULLUP);   // Set the sixth button pin as an input with internal pull-up resistor
  pinMode(ledPin3, OUTPUT);     // Set the seventh LED pin as an output
  pinMode(pushButton7, INPUT_PULLUP);   // Set the seventh button pin as an input with internal pull-up resistor
  pinMode(ledPin4, OUTPUT);     // Set the eighth LED pin as an output
  pinMode(pushButton8, INPUT_PULLUP);   // Set the eighth button pin as an input with internal pull-up resistor

}

void loop()
{
  int a = digitalRead(pushButton1);   // Read the state of the first button
  int b = digitalRead(pushButton2);   // Read the state of the second button
  int c = digitalRead(pushButton3);   // Read the state of the third button
  int d = digitalRead(pushButton4);   // Read the state of the fourth button
  int e = digitalRead(pushButton5);   // Read the state of the fifth button
  int f = digitalRead(pushButton6);   // Read the state of the sixth button
  int g = digitalRead(pushButton7);   // Read the state of the seventh button
  int h = digitalRead(pushButton8);   // Read the state of the eighth button

  switch (a){
  case 1:
    digitalWrite(ledPin1, HIGH);    // Turn on the first LED if the first button is pressed
    break;
  case 0:
    digitalWrite(ledPin1, LOW);     // Turn off the first LED if the first button is not pressed
    break;
  }

  switch (b){
  case 1:
    digitalWrite(ledPin2, HIGH);    // Turn on the second LED if the second button is pressed
    break;
  case 0:
    digitalWrite(ledPin2, LOW);     // Turn off the second LED if the second button is not pressed
    break;
  }

  switch (c){
  case 1:
    digitalWrite(ledPin3, HIGH);    // Turn on the third LED if the third button is pressed
    break;
  case 0:
    digitalWrite(ledPin3, LOW);     // Turn off the third LED if the third button is not pressed
    break;
  }

  switch (d){
  case 1:
    digitalWrite(ledPin4, HIGH);    // Turn on the fourth LED if the fourth button is pressed
    break;
  case 0:
    digitalWrite(ledPin4, LOW);     // Turn off the fourth LED if the fourth button is not pressed
    break;
  }

  switch (e){
  case 1:
    digitalWrite(ledPin1, HIGH);    // Turn on the first LED if the fifth button is pressed
    break;
  case 0:
    digitalWrite(ledPin1, LOW);     // Turn off the first LED if the fifth button is not pressed
    break;
  }

  switch (f){
  case 1:
    digitalWrite(ledPin2, HIGH);    // Turn on the second LED if the sixth button is pressed
    break;
  case 0:
    digitalWrite(ledPin2, LOW);     // Turn off the second LED if the sixth button is not pressed
    break;
  }

  switch (g){
  case 1:
    digitalWrite(ledPin3, HIGH);    // Turn on the third LED if the seventh button is pressed
    break;
  case 0:
    digitalWrite(ledPin3, LOW);     // Turn off the third LED if the seventh button is not pressed
    break;
  }

  switch (h){
  case 1:
    digitalWrite(ledPin4, HIGH);    // Turn on the fourth LED if the eighth button is pressed
    break;
  case 0:
    digitalWrite(ledPin4, LOW);     // Turn off the fourth LED if the eighth button is not pressed
    break;
  }

}
