#include<ESP32Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(4);
  pinMode(23,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(23)==HIGH){
    myservo.write(90);
  }
  else{
    myservo.write(0);
  }

}
