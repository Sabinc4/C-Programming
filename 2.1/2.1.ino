//SABIN CHAULAGAIN
//2358554
//defining the led pin!
int led=12;
void setup(){
pinMode (led,OUTPUT);     
//setting ht pin as output 
}

void loop() { 
//Looping
for (int i=0; i<6; i++){          // blinking the led for 6times using loop
  digitalWrite(led, HIGH);  // turning on led
  delay(1000);
  digitalWrite(led, LOW);  //turning off led
  delay(1000);  //waiting for 1 sec delay
}
digitalWrite(led, LOW); 
//turning the led off
delay(5000);  again waiting for 5sec delay
}
