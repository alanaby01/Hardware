 /* dance zigzag
     ************
    */ 
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
  
  

  /* one leg dance (right)
    **********************
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

  */



/*  one leg body rotation (right)
    *****************************
    
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
*/


/*
 one leg dance (left)
 ********************
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
*/


/*  
   One leg body rotation (left)
   ***************************
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
  */
