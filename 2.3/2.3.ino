int ledPin = 6; //Led is connected to the 6 number pin of arduino
int pushButton = 7; //pushbutton is connected to the 7 number of the arduino
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(pushButton, INPUT_PULLUP);
}

void loop()
{
  if(!digitalRead(pushButton)){
    digitalWrite(ledPin,1); //Led will blink
    delay(3000); //It make delay by 3 second 
  }
  else{
      digitalWrite(ledPin,0); //Led will not blink turn off 
  }
}
