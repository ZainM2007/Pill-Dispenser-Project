
#include <Servo.h>


// Declare the Servo pin
int servoPin = 9;
// Create a servo object
Servo Servo1;


void setup() {
  // Attach the servo to the specified pin
  Servo1.attach(servoPin);
}


void loop() {
  // Move the servo in one direction (clockwise)
  Servo1.write(0); // Rotate in one direction (e.g., clockwise)
  delay(500); // Rotate for 0.5 seconds (faster movement)


  // Stop the servo
  Servo1.write(90); // Stop the servo completely
  delay(14400000); // Pause for 10 seconds // 14400000 is a 4 hour delay
}
