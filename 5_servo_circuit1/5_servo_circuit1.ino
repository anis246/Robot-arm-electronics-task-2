#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist;
Servo gripper;


void setup() {
  base.attach(5);  
  shoulder.attach(6); 
  elbow.attach(9);  
  wrist.attach(10);  
  gripper.attach(11);  
  
  delay(1000); 
  
  base.write(90);
  shoulder.write(90);
  elbow.write(90);
  wrist.write(90);
  gripper.write(90);
}

void loop() {
                       
}
