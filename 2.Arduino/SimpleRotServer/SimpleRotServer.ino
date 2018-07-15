#include <Servo.h>
Servo servoOne; // Define our Servo

void setup()
{
servoOne.attach(9); // servo on digital pin 10
}

void loop()
{
servoOne.write(45); // Turn Servo Left to 45 degrees
delay(1000); // Wait 1 second
servoOne.write(0); // Turn Servo Left to 0 degrees
delay(1000); // Wait 1 second
servoOne.write(90); // Turn Servo back to center position (90 degrees)
delay(1000); // Wait 1 second
servoOne.write(135); // Turn Servo Right to 135 degrees
delay(1000); // Wait 1 second
servoOne.write(180); // Turn Servo Right to 180 degrees
delay(1000); // Wait 1 second
servoOne.write(90); // Turn Servo back to center position (90 degrees)
delay(1000); // Wait 1 second 
}
