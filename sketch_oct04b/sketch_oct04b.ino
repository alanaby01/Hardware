#include<SoftwareSerial.h>
SoftwareSerial BT(0,1);


void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  BT.begin(38400);
}

char ch;
void loop() {
  // put your main code here, to run repeatedly:
  
  ch=BT.read();
  if(ch>0)
    {
        digitalWrite(13,HIGH);
        delay(1000);
    }
    digitalWrite(13,LOW);
   delay(100);
}
