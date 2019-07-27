
#include <Servo.h>

Servo myservo;


void setup() {
  pinMode(1, INPUT);
  digitalWrite(1, LOW);
  myservo.attach(9);
}

void loop() {
  if (digitalRead(1) == LOW) {
    myservo.write(0);
   
  }
  if (digitalRead(1) == HIGH) {
    myservo.write(110);

   
  }

}
