//Servo Test
//Range: 0 to 180

//Bring in Servo Object and functions
#include <Servo.h>

//Create Instance of Servo Object
Servo servoA;
Servo servoB;

//function:
void photoServo() {
  //photo
 
 
 if((analogRead(0)) >500) {
   servoA.write(0);
   servoB.write(180); 
 }
 
 if((analogRead(0)) < 500) {
   servoB.write(90);
   servoA.write(90); 
  
}



}

//Setup - Run One Time
void setup() {

  
  //Attach servoA and servoB to Pin 9 and Pin 10
  servoA.attach(9);
  servoB.attach(10);
  
  //Rotate Servo at 0 and 180
  servoA.write(0);
  servoB.write(90);
  delay(2000);
  
  servoB.write(0);
  servoA.write(90);
  delay(2000);
  
  servoA.write(180);
  servoB.write(180);
  delay(4000);
  
  servoA.write(0);
  servoB.write(0);
  delay(3000);
  
  servoA.write(180);
  servoB.write(90);
  delay(1000); 
  
  servoB.write(180);
  servoA.write(90);
  delay(1000); 
  
  servoA.write(90);
  servoB.write(90);
  
}
  
 
void loop() {
 photoServo();
}
