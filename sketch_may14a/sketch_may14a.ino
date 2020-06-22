
/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo servo1; //Left Legs
Servo servo2; //Right Legs
Servo servo3; //Bottom Legs
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  servo2.attach(8);
  servo1.attach(9);  // attaches the servo on pin 9 to the servo object
  servo3.attach(10);
}

void loop() {
//  for (pos = 0; pos <= 60; pos += 1) { // goes from 0 degrees to 60 degrees
//    // in steps of 1 degree
//    servo1.write(pos);              // tell servo to go to position in variable 'pos'
//    servo2.write(pos);
//    servo3.write(pos/2);
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//  for (pos = 60; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//    servo1.write(pos);              // tell servo to go to position in variable 'pos'
//    servo2.write(pos);

//    servo3.write(pos/2);
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
  servo1.write(90);
  delay(1000);
  servo2.write(90);
  delay(1000);
  servo3.write(90);
  delay(1000);
}
