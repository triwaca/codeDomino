/*
 * Code Domino Step Motor Test
 * Daniel Almeida Chagas
 * 
 * - Connect step motor 28BYJ-48 on ports 4 to 7 on Arduino
 * - Compile and execute the code on your Arduino. Motor must rotate.
 * - Try decrease value of delayTime, to increase motor speed. 
 * 
 */

int pin1 = 4;
int pin2 = 5;
int pin3 = 6;
int pin4 = 7;

int delayTime = 4;

void setup(){
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop(){
  runMotor();
}

void runMotor(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  delay(delayTime);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(delayTime);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin1, HIGH);
  delay(delayTime);
  digitalWrite(pin4, LOW);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  delay(delayTime);
}
