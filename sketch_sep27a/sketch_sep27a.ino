#include<Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;
const int trig=10;
const int echo=9;
long duration;
int distance;
boolean l=true;

void right()
{
 for(int i=90;i>=50;i-=5)
 {
  if(i>=60)
     s3.write(i);
  s1.write(i);
  delay(50);
 }
  delay(100);
  for(int i=50;i<=130;i=i+5)
  {
  s3.write(i);
  delay(30);
  }
  delay(500);
   for(int i=80;i>=50;i=i-5)
  {
  s4.write(i);
  delay(100);
  }
  delay(100);
  s1.write(90);
  delay(100);
for(int i=130; i>=90;i-=5)
{
  s3.write(i);
  delay(100);
}   
delay(100);
   s1.write(90);
  s2.write(80);
  s3.write(90);
  s4.write(80);
  delay(500);
}




void mode()
{
     digitalWrite(trig,LOW);
   delayMicroseconds(2);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance = duration/58;
  if(distance<=20)
  {
    digitalWrite(13,HIGH);
    left_90();
    
  }
   else
   {
    digitalWrite(13,LOW);
    frwd();
   }
}



void left()
{
  for(int i=90;i<=120;i+=5)
  {
    if(i<=110)
      s1.write(i);
  s3.write(i);
  delay(50);
  }
  delay(100);
  for(int i=110;i>=45;i=i-5)
  {
  s1.write(i);
  delay(30);
  }
  delay(1000);
  
 for(int i=80;i<=110;i=i+5)
  {
  s2.write(i);
  delay(100);
  }
  delay(100);
  s3.write(90);
  delay(100);
  for(int i=45; i<=90;i+=5)
{
  s1.write(i);
  delay(100);
}
  delay(500);
    s1.write(90);
  s2.write(80);
  s3.write(90);
  s4.write(80);
  delay(500);
}


void frwd()
{
  //left
  for(int i=90;i<=120;i+=5)
  {
    if(i<=110)
      s1.write(i);
  s3.write(i);
  delay(50);
  }
  delay(100);
  for(int i=110;i>=60;i=i-5)
  {
  s1.write(i);
  delay(30);
  }
  delay(500);
  
 for(int i=80;i<=110;i=i+5)
  {
  s2.write(i);
  s4.write(i);
  s3.write(200-i);
  delay(100);
  }
  delay(100);
  for(int i=60; i<=90;i+=5)
{
  s1.write(i);
  s4.write(170-i);
  delay(100);
}
  delay(100);
  for(int i=110;i>=80;i-=5)
  {
  s2.write(80);
  delay(20);
  }
  delay(100);

  //right

for(int i=90;i>=60;i-=5)
 {
  if(i>=50)
     s3.write(i);
  s1.write(i);
  delay(50);
 }
  delay(100);
  for(int i=50;i<=120;i=i+5)
  {
  s3.write(i);
  delay(30);
  }
  delay(500);
   for(int i=80;i>=50;i=i-5)
  {
  s4.write(i);
  s2.write(i);
  s1.write(140-i);
  delay(100);
  }
  delay(100);
for(int i=120; i>=90;i-=5)
{
  s3.write(i);
  s2.write(170-i);
  delay(100);
}   
  delay(100);
  for(int i=50;i<=80;i+=5)
  {
  s4.write(80);
  delay(20);
  }
  delay(100);
  
}

void marchpast()
{
    for(int i=80;i>=40;i-=5)
  {
  s2.write(i);
  s4.write(i);
  delay(10);
  }
 delay(100);
  for(int i=40;i<=80;i+=5)
  {
  s2.write(i);
  s4.write(i);
  delay(10);
  }
  
    for(int i=80;i<=120;i+=5)
  {
  s2.write(i);
  s4.write(i);
  delay(10);
  }
  delay(100);
  for(int i=120;i<=80;i-=5)
  {
  s2.write(i);
  s4.write(i);
  delay(10);
  }
}

void left_dance()
{
  for(int i=90;i<=120;i+=5)
  {
    if(i<=110)
      s1.write(i);
  s3.write(i);
  delay(50);
  }
  delay(100);
  for(int i=110;i>=45;i=i-5)
  {
  s1.write(i);
  delay(20);
  }
  delay(1000);
  for(int i=0;i<2;i++)
  {
  s3.write(20);
  delay(500);
  s3.write(160);
  delay(500);
  }
  delay(100);
  s3.write(90);
  delay(100);
    for(int i=45; i<=90;i+=5)
{
  s1.write(i);
  delay(100);
}
delay(500);
    s1.write(90);
  s2.write(80);
  s4.write(80);
  delay(500);
}
void left_90()
{
  for(int i=0;i<4;i++)
    left();
}
void left_body_rotation()
{
  for(int i=90;i<=120;i+=5)
  {
    if(i<=110)
      s1.write(i);
  s3.write(i);
  delay(50);
  }
  delay(100);
  delay(500);
  for(int i=110;i>=45;i=i-5)
  {
  s1.write(i);
  delay(20);
  }
  delay(1000);
  
 for(int i=80;i<=110;i=i+5)
  {
  s2.write(i);
  delay(100);
  }
  delay(500);
  for(int i=100;i>=60;i=i-5)
  {
  s2.write(i);
  delay(100);
  }
  delay(500);
  for(int i=60;i<=80;i=i+5)
  {
    s2.write(i);
    delay(100);
  }
  delay(1000);
    s1.write(90);
  s2.write(80);
  s3.write(90);
  s4.write(80);
  delay(500);
}

void right_body_rotation()
{
  for(int i=90;i>=50;i-=5)
 {
  if(i>=60)
     s3.write(i);
  s1.write(i);
  delay(50);
 }
  delay(100);
  for(int i=50;i<=135;i=i+5)
  {
  s3.write(i);
  delay(20);
  }
  delay(1500);
  for(int i=80;i<=100;i=i+5)
  {
  s4.write(i);
  delay(100);
  }
  delay(500);
  for(int i=100;i>=55;i=i-5)
  {
  s4.write(i);
  delay(100);
  }
  delay(500);
  for(int i=55;i<=80;i=i+5)
  {
    s4.write(i);
    delay(100);
  }
  delay(1000);
    s1.write(90);
  s2.write(80);
  s3.write(90);
  s4.write(80);
  delay(500);
}

void right_dance()
{
  for(int i=90;i>=50;i-=5)
 {
  if(i>=60)
     s3.write(i);
  s1.write(i);
  delay(50);
 }
  delay(100);
  for(int i=50;i<=135;i=i+5)
  {
  s3.write(i);
  delay(20);
  }
  delay(1000);
  
  for(int i=0;i<2;i++)
  {
  s1.write(160);
  delay(500);
  s1.write(20);
  delay(500);
  }
  
  delay(5000);
  s1.write(90);
  s2.write(80);
  s3.write(90);
  s4.write(80);
  delay(500);
}
void zigzag()
{
   s3.write(40);
  s1.write(140);
  delay(500);
  s3.write(90);
  s1.write(90);
  delay(500);
   s3.write(130);
  s1.write(50);
  delay(500);
  s3.write(90);
  s1.write(90);
  delay(500);
}
void setup() {
  // put your setup code here, to run once:
  s1.attach(5);
  s2.attach(4);
  s3.attach(2);
  s4.attach(3);

  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  char ch;
  // put your main code here, to run repeatedly:
  s1.write(90);//inner as increase
  s2.write(80);//inner as increase
  s3.write(90);//outer as increase
  s4.write(80);//outer as increases
  ch=Serial.read();
  if(ch=='R')
    {
      while((ch=Serial.read())!='R')
      {
        right();
        delay(100);
      }
        
    }
   if(ch=='L')
    {
      while((ch=Serial.read())!='L')
      {
        left();
        delay(100);
      }
        
    }
    if(ch=='F')
    {
      while((ch=Serial.read())!='F')
      {
        frwd();
        delay(100);
      }
        
    }
    if(ch=='M')
    {
      while((ch=Serial.read())!='M')
      {
        marchpast();
        delay(100);
      }
        
    }
   if(ch=='l')
    {
      while((ch=Serial.read())!='l')
      {
        left_dance();
        delay(100);
      }
        
    }
    if(ch=='b')
    {
      while((ch=Serial.read())!='b')
      {
        left_body_rotation();
        delay(100);
      }
        
    }
    if(ch=='B')
    {
      while((ch=Serial.read())!='B')
      {
        right_body_rotation();
        delay(100);
      }
        
    }
    if(ch=='r')
    {
      while((ch=Serial.read())!='r')
      {
        right_dance();
        delay(100);
      }
        
    }
    if(ch=='Z')
    {
      while((ch=Serial.read())!='Z')
      {
        zigzag();
        delay(100);
      }
        
    }
    if(ch=='X')
    {
      while((ch=Serial.read())!='X')
      {
        mode();
        delay(100);
      }
        
    }
    delay(100);
    
  
  
  
  
  
}
