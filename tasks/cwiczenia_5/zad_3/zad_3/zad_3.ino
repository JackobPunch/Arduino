/* 
 *  Zadanie 3 
 *  Na jednym z poprzednich laboratoriów poznano serwomechanizmy. W tym zadaniu wykorzystamy 2 takie elementy
 *  w połączeniu z nowym elementem jakim jest Joystick. Pierwszy serwomechanizm będzie reprezentował 
 *  poruszanie się po osi X a drugi osi Y.
 *  Zadanie będzie polegało na:
 *  - Połączeniu 2 serwomechanizmów oraz joysticku do płytki stykowej
 *  - Napisaniu kodu realizującego zadanie 
 */



#include <Servo.h>

#define joyX A0
#define joyY A1

Servo servo1;
Servo servo2;

int servoVal;
  
void setup() 
{
  servo1.attach(3);
  servo2.attach(5);
}
  
void loop()
{
  servoVal = analogRead(joyX);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo1.write(servoVal);

  servoVal = analogRead(joyY);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo2.write(servoVal);
  delay(15);  
}
