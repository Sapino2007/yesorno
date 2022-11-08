#include <Servo.h>

Servo myServo;
const int buttonpin = 2;
int buttonstate = 0;

void setup() {

   myServo.attach(9);
        pinMode(buttonpin, INPUT);
}

void loop() {
 myServo.write(90);
  buttonstate = digitalRead(buttonpin);


  if (buttonstate == HIGH) {
        int randomPosition = random(1, 3);

       
  if(randomPosition == 1){
    myServo.write(55);
    delay(800);
  }

  if(randomPosition == 2){
   myServo.write(140);
   delay(800);
  }
 }
}
 
