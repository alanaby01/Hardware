void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
char ch;
ch=Serial.read();
if(ch=='9')
{
  digitalWrite(13,HIGH);
  delay(2000);
}
digitalWrite(13,LOW);
delay(100);

}
