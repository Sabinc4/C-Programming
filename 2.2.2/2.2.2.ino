const int LED1 = 12;    // Pin number for the first LED
const int LED2 = 11;    // Pin number for the second LED
const int LED3 = 10;    // Pin number for the third LED

void setup()
{
  pinMode(LED1, OUTPUT);   // Set the first LED pin as an output
  pinMode(LED2, OUTPUT);   // Set the second LED pin as an output
  pinMode(LED3, OUTPUT);   // Set the third LED pin as an output
}

void loop()
{
  digitalWrite(LED1, HIGH);   // Turn on the first LED
  digitalWrite(LED2, LOW);    // Turn off the second LED
  digitalWrite(LED3, LOW);    // Turn off the third LED
  delay(2000);                // Wait for 2000 milliseconds (2 seconds)

  digitalWrite(LED1, LOW);    // Turn off the first LED
  digitalWrite(LED2, HIGH);   // Turn on the second LED
  digitalWrite(LED3, LOW);    // Turn off the third LED
  delay(2000);                // Wait for 2000 milliseconds (2 seconds)

  digitalWrite(LED1, LOW);    // Turn off the first LED
  digitalWrite(LED2, LOW);    // Turn off the second LED
  digitalWrite(LED3, HIGH);   // Turn on the third LED
  delay(2000);                // Wait for 2000 milliseconds (2 seconds)
}
