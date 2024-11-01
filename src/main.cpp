#include <Servo.h>  
#include <Arduino.h>

#define POT_PIN  A0
#define SERVO_PIN 9
#define SERVO_MIN  0  
#define SERVO_MAX  180

Servo servo;  

int pot_val;
int servo_val;

void setup()   
{
  servo.attach(SERVO_PIN);
}

void loop()  
{
  pot_val = analogRead(POT_PIN);

  servo_val = map(pot_val, 0, 1023, SERVO_MIN , SERVO_MAX);
  
  servo.write(servo_val);
  delay(100);
}
