const int LED1 = 12;    // Pin number for the first LED
const int LED2 = 11;    // Pin number for the second LED
const int LED3 = 10;    // Pin number for the third LED
const int LED4 = 8;     // Pin number for the fourth LED

void setup()
{
  pinMode(LED1, OUTPUT);   // Set the first LED pin as an output
  pinMode(LED2, OUTPUT);   // Set the second LED pin as an output
  pinMode(LED3, OUTPUT);   // Set the third LED pin as an output
  pinMode(LED4, OUTPUT);   // Set the fourth LED pin as an output
}

void loop()
{
  for (int i = 0; i < 16; i++)  // Loop from 0 to 15 (binary from 0000 to 1111)
  {
    digitalWrite(LED1, (i & 0b1000) >> 3);   // Set the state of the first LED based on the most significant bit (MSB) of i
    digitalWrite(LED2, (i & 0b0100) >> 2);   // Set the state of the second LED based on the second most significant bit of i
    digitalWrite(LED3, (i & 0b0010) >> 1);   // Set the state of the third LED based on the third most significant bit of i
    digitalWrite(LED4, i & 0b0001);          // Set the state of the fourth LED based on the least significant bit (LSB) of i
    delay(1000);    // Wait for 1000 milliseconds (1 second)
  }
}
