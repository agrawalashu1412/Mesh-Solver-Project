void setup() {
  // put your setup code here, to run once:

pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7, INPUT);
pinMode(6, INPUT);
pinMode(5, INPUT);
pinMode(4, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

//led glow 9=green 8=red
if(digitalRead(7)==0&&digitalRead(6)==0&&digitalRead(5)==0&&digitalRead(4)==0||digitalRead(7)==1&&digitalRead(6)==1&&digitalRead(5)==1&&digitalRead(4)==1)
{digitalWrite(9,LOW);
digitalWrite(8,HIGH);}
 else
 {digitalWrite(9,HIGH);
digitalWrite(8,LOW);} 


//Right +(straight/right)
if(digitalRead(7)==0&&digitalRead(6)==1&&digitalRead(5)==1&&digitalRead(4)==1)
{digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
}

//left +(left/straight)
if(digitalRead(7)==1&&digitalRead(6)==1&&digitalRead(5)==1&&digitalRead(4)==0)
{

digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
}



//forward + u turn
if(digitalRead(7)==0&&digitalRead(6)==1&&digitalRead(5)==1&&digitalRead(4)==0)
{digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
}
else
{
   if(digitalRead(7)==0&&digitalRead(6)==0&&digitalRead(5)==0&&digitalRead(4)==0)
{digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);}
}

//1111

if(digitalRead(7)==1&&digitalRead(6)==1&&digitalRead(5)==1&&digitalRead(4)==1)
{
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
delay(500);

if(digitalRead(7)==1&&digitalRead(6)==1&&digitalRead(5)==1&&digitalRead(4)==1)
{
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(8,HIGH);
delay(50000);}
else{
  if(digitalRead(7)==0&&digitalRead(6)==1&&digitalRead(5)==1&&digitalRead(4)==0)
{
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
}
else
{
  if(digitalRead(7)==0&&digitalRead(6)==0&&digitalRead(5)==0&&digitalRead(4)==0)
{
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
delay(1550);

digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
}}}}

}
