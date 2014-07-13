/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
int led = 13;
int pwm = 0;
int dir = 1;

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  analogWrite(led, pwm);
  pwm += dir;
  if (pwm>255) {
    dir = -1;
    pwm = 254;
  }
  else if (pwm<0) {
    dir = 1;
    pwm = 1;
  }
  delay(100);
}