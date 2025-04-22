/*
 * Code Domino Step Motor Test
 * Daniel Almeida Chagas
 * 
 * - Connect step motor 28BYJ-48 on ports 4 to 7 on Arduino
 * - Compile and execute the code on your Arduino. Motor must rotate.
 * - Try decrease value of delayTime, to increase motor speed. 
 * 
 */

int pins()= {4, 5, 6, 7};

int delayTime = 4;
int coilControl = 0;

void setup(){
  pinMode(pins(0), OUTPUT);
  pinMode(pins(1), OUTPUT);
  pinMode(pins(2), OUTPUT);
  pinMode(pins(3), OUTPUT);
}

void loop(){
  runMotor();
}

void runMotor(){
  coilControl++;
  if(coilControl>3)coilControl=0;
  int nextCoil1 = coilControl + 1;
  if(nextCoil1>3) nextCoil1 = 0;
  int nextCoil2 = nextCoil1 + 1;
  if(nextCoil2>3) nextCoil2 = 0;
  digitalWrite(coilControl, LOW);
  digitalWrite(nextCoil1, HIGH);
  digitalWrite(nextCoil2, HIGH);
  delay(delayTime);
}
