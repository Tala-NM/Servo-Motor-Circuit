#include <Servo.h>

Servo leftPelvis;
Servo leftKnee;
Servo leftFoot;
Servo rightPelvis;
Servo rightKnee;
Servo rightFoot;

void setup() {
  leftPelvis.attach(10);
  leftKnee.attach(9);
  leftFoot.attach(8);
  rightPelvis.attach(7);
  rightKnee.attach(6);
  rightFoot.attach(5);
}

void loop() {
  leftPelvis.write(45);  
  leftKnee.write(90);    
  leftFoot.write(45);    
  delay(500);            

  rightPelvis.write(45);  
  rightKnee.write(90);    
  rightFoot.write(45);    
  delay(500);             

  leftPelvis.write(90);  
  leftKnee.write(180);   
  leftFoot.write(90);    
  delay(500);            

  rightPelvis.write(90);  
  rightKnee.write(180);   
  rightFoot.write(90);    
  delay(500);             
}
