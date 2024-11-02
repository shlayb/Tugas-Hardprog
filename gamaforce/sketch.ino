#include <ESP32Servo.h>

#define TRIG_PIN 22
#define ECHO_PIN 23

int servoPin = 13;

float duration_us, distance;
int servovalue = 0, degree_temp = 0;

Servo myservo;

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  myservo.attach(servoPin);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration_us = pulseInLong(ECHO_PIN, HIGH);
  distance = duration_us * 0.017;

  if (distance > 10) {
    degree_temp = distance / 2;
    servovalue = 10 * degree_temp;

    if (servovalue > 180) {
      servovalue = 180;
    }
  } else {
    servovalue = 0;
  }

  myservo.write(servovalue);
  delay(300);
}
