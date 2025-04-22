/*
 * Code Domino Step Motor Test
 * Daniel Almeida Chagas
 * 
 * - Connect step motor 28BYJ-48 on ports 4 to 7 on Arduino
 * - Compile and execute the code on your Arduino. Motor must rotate.
 * - Try decrease value of delayTime, to increase motor speed. 
 * 
 */

int pinsR[]= {6, 7, 8, 9};
int pinsL[]= {2, 3, 4, 5};

int delayTime = 4;
int coilControlR = 0;
int coilControlL = 0;

void setup(){
  pinMode(pinsR[0], OUTPUT);
  pinMode(pinsR[1], OUTPUT);
  pinMode(pinsR[2], OUTPUT);
  pinMode(pinsR[3], OUTPUT);
  pinMode(pinsL[0], OUTPUT);
  pinMode(pinsL[1], OUTPUT);
  pinMode(pinsL[2], OUTPUT);
  pinMode(pinsL[3], OUTPUT);
}

void loop(){
  runMotor(pinsR, coilControlR);
  coilControlR++;
  if(coilControlR > 3) coilControlR = 0;
  runMotor(pinsL, coilControlL);
  coilControlL++;
  if(coilControlL > 3) coilControlL = 0;
}

void runMotor(int pins[], int coilControl){
  int nextCoil1 = coilControl + 1;
  if(nextCoil1>3) nextCoil1 = 0;
  int nextCoil2 = nextCoil1 + 1;
  if(nextCoil2>3) nextCoil2 = 0;
  digitalWrite(pins[coilControl], LOW);
  digitalWrite(pins[nextCoil1], HIGH);
  digitalWrite(pins[nextCoil2], HIGH);
  delay(delayTime);
}
