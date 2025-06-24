/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo


void setup() {
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  
  myservo.write(160);                  // sets the servo position according to the scaled value
  delay(1000);  
  myservo.write(90);
  delay(1000);
myservo.write(20); //0 set point
delay(1000);
myservo.write(90);
delay(1000);
}
