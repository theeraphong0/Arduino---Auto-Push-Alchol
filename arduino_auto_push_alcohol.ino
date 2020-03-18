#include <Servo.h>
Servo myservo;
void setup()
{
  pinMode(A0, INPUT_PULLUP); // set IR sensor pin
  myservo.attach(9);// set servo control Pin
  myservo.write(85);// servo stand by state 
}
void loop()
{
  if (digitalRead(A0) == LOW) { // Read IR sensor value
    delay(500);
    myservo.write(160);// rotate servo 
    delay(2000);
    myservo.write(85);// servo stand by state
    delay(3000);
  }
}
