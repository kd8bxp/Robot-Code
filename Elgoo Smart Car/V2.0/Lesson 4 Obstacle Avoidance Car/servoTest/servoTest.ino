#include <Servo.h>
Servo myservo;
void setup(){
  myservo.attach(3);
  myservo.write(20);
  delay(1000);
} 
void loop(){
  
  for(int i=20; i<=160; i++){
    myservo.write(i);
    delay(100);
  }
  
  //delay(2000);
  for(int i=160; i>=20; i--){
    myservo.write(i);
    delay(100);
  }
  //delay(2000);
}
