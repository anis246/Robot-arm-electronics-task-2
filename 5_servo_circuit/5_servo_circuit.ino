#include <Servo.h>

Servo base;
Servo waist;
Servo arm1;
Servo aem2;
Servo gripper;


void setup() {
  base.attach(5);  
  waist.attach(6); 
  arm1.attach(9);  
  aem2.attach(10);  
  gripper.attach(11);  
  
  delay(1000); 
  
  base.write(90);
  waist.write(90);
  arm1.write(90);
  aem2.write(90);
  gripper.write(90);
}

void loop() {
                       
}