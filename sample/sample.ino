#include<Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;  
void setup() {

s3.attach(9);
s2.attach(6);
s1.attach(5);
s4.attach(3);

Serial.begin(9600);
}

int j,i;
void loop(){


s3.write(80);//normal
s4.write(100);//normal

s1.write(140);//normal
s2.write(165);//normal
//delay(1000);;//outer
s3.write(100);//normal
s4.write(120);//normal
delay(1000);
s3.write(120);//inner
s4.write(140);//outer 
;//outer
delay(1000);
s3.write(50);//inner
s4.write(70);//outer //normal
s1.write(140);//normal
s2.write(165);//normal
delay(1000);}
