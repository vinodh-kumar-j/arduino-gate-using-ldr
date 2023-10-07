#include <Servo.h>

Servo gateServo;
int ldrPin = A0;
int thresholdValue = 350;

void setup() {
  gateServo.attach(9);
}

void loop() {
  int analogValue = analogRead(ldrPin);
  
  if (analogValue < thresholdValue) {
    gateServo.write(100); // Set servo angle to 90 degrees
    delay(1000); // Wait for the gate to open
  } else {
    gateServo.write(5); // Set servo angle to 0 degrees
    delay(100); // Wait for the gate to close
  }
}
