// @autor Tomas de Camino BEck
// Drive redbot with commands serial-bluetooth

#include <RedBot.h>

RedBotMotor motors;
boolean s1 = true;
boolean s2 = true;
boolean s3 = true;

void setup()
{
  Serial.begin(9600);//connect to serial port
}

void loop()
{
  char inChar;
  //wait for serial commad
  if (Serial.available()) {
    inChar = (char)Serial.read();
    if (inChar == 'u') {
      motors.drive(-255);
      delay(100);
      motors.brake();
    }
    if (inChar == 'd') {
      motors.drive(255);
      delay(100);
      motors.brake();
    }
    if (inChar == 'l') {
      motors.leftDrive(-255);
      delay(50);
      motors.brake();
    }
    if (inChar == 'r') {
      motors.rightDrive(-255);
      delay(50);
      motors.brake();
    }
  }

}
