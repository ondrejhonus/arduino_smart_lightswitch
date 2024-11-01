// letsarduino.com
// [Project 11] - 2 Servos Using a Joystick 
//  (thumbstick) + Arduino

#include <Servo.h>  
#include <Arduino.h>

#define ServoXPin  9   
#define ServoYPin   10   
#define HorizontalPotPin  A1
#define VerticalPotPin  A1 
#define ServoMin  0  
#define ServoMax  180

Servo XServo;  
Servo YServo;    

int XPos;    
int YPos;    

int joyX = A0;
int joyY = A1;
int JoyXVal;
int JoyYVal;

void setup()   
{
  XServo.attach(ServoXPin);   
  YServo.attach(ServoYPin);         
}

void loop()  
{
  JoyXVal = analogRead(joyX);
  JoyYVal = analogRead(joyY);

  XPos  = map(JoyXVal, 0, 1023, ServoMin , ServoMax);
  YPos  = map(JoyYVal, 1023, 0, ServoMin , ServoMax);
  
  XServo.write(XPos);
  YServo.write(YPos);
  delay(20);
}
