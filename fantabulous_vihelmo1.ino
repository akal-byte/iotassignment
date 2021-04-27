#include <Servo.h>
Servo servo1;
int potpin=0;
int Red = 5;
int Blue = 6;
int Green=3;
int val;
long distance;
long duration;
void setup()
{
 pinMode(Red, OUTPUT);
 pinMode(Blue, OUTPUT);
  pinMode(Green,OUTPUT);
  servo1.attach(9);
}
void loop() {
  servo1.write(0);
  if(distance <=100){
    servo1.write(60);
    digitalWrite(Red,HIGH);
    delay(2000);
	digitalWrite(Red, LOW);
    delay(500);

  }
    //ultra();
    servo1.write(0);
    if (distance<=100){
      servo1.write(100);
        digitalWrite(Blue,HIGH);
		delay(2000);
         digitalWrite(Blue,LOW);
      delay(500);

 }
  //ultra();
    servo1.write(0);
    if (distance<=100){
      servo1.write(180);
         digitalWrite(Green,HIGH);
      delay(2000);
        digitalWrite(Green,LOW);
      delay(500);
    }
    else{servo1.write(0);}
}
void ultra(){
  delayMicroseconds(2);
  delayMicroseconds(2);

  delayMicroseconds(2);
  delayMicroseconds(2);
  delayMicroseconds(10);
  delayMicroseconds(2);
  delayMicroseconds(15);
    //duration=duration*0.343/2;
}
