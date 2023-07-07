//SABIN CHAULAGAIN
//2358554
int pinA = 2;// connecting segment A to PIN2
int pinB = 3; // connecting segment A to PIN3
int pinC = 4;// connecting segment A to PIN4
int pinD = 5;// connecting segment A to PIN5
int pinE = 6;// connecting segment A to PIN6
int pinF = 7;// connecting segment A to PIN7
int pinG = 8;// connecting segment A to PIN8

void setup() {
  // put your setup code here, to run once:
  for (int i=2;i<7;i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  // 0
  digitalWrite(pinA , 1);
  digitalWrite(pinB , 1);
  digitalWrite(pinC , 1);
  digitalWrite(pinD , 1);
  digitalWrite(pinE , 1);
  digitalWrite(pinF , 1);
  digitalWrite(pinG , 0);
  delay(2000);

  // 1
  digitalWrite(pinA , 0);
  digitalWrite(pinB , 1);
  digitalWrite(pinC , 1);
  digitalWrite(pinD , 0);
  digitalWrite(pinE , 0);
  digitalWrite(pinF , 0);
  digitalWrite(pinG , 0);
  delay(2000);

  // 2
  digitalWrite(pinA , 1);
  digitalWrite(pinB , 1);
  digitalWrite(pinC , 0);
  digitalWrite(pinD , 1);
  digitalWrite(pinE , 1);
  digitalWrite(pinF , 0);
  digitalWrite(pinG , 1);
  delay(2000);

  // 3
  digitalWrite(pinA , 1);
  digitalWrite(pinB , 1);
  digitalWrite(pinC , 1);
  digitalWrite(pinD , 1);
  digitalWrite(pinE , 0);
  digitalWrite(pinF , 0);
  digitalWrite(pinG , 1);
  delay(2000);

  // 4
  digitalWrite(pinA , 0);
  digitalWrite(pinB , 1);
  digitalWrite(pinC , 1);
  digitalWrite(pinD , 0);
  digitalWrite(pinE , 0);
  digitalWrite(pinF , 1);
  digitalWrite(pinG , 1);
  delay(2000);

  // 5
  digitalWrite(pinA , 1);
  digitalWrite(pinB , 0);
  digitalWrite(pinC , 1);
  digitalWrite(pinD , 1);
  digitalWrite(pinE , 0);
  digitalWrite(pinF , 1);
  digitalWrite(pinG , 1);
  delay(2000);

  // 6
  digitalWrite(pinA , 1);
  digitalWrite(pinB , 0);
  digitalWrite(pinC , 1);
  digitalWrite(pinD , 1);
  digitalWrite(pinE , 1);
  digitalWrite(pinF , 1);
  digitalWrite(pinG , 1);
  delay(2000);

  // 7
  digitalWrite(pinA , 1);
  digitalWrite(pinB , 1);
  digitalWrite(pinC , 1);
  digitalWrite(pinD , 0);
  digitalWrite(pinE , 0);
  digitalWrite(pinF , 0);
  digitalWrite(pinG , 0);
  delay(2000);

}
