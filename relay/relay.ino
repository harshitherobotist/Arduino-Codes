char a,v,w,y,z,V,W,Z,Y;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() >0)
{
  a=Serial.read();
  Serial.println(a);
  if(a=='Z')
  {
    digitalWrite(8,LOW);
   
  }
  else if(a=='Y')
  {
    digitalWrite(9,LOW);
    
  }
  else if(a=='W')
  {
    digitalWrite(10,LOW);
    
  }
  else if(a=='V')
  {
    digitalWrite(11,LOW);
    
  }
  else if(a=='z')
  {
    digitalWrite(8,HIGH);
   
  }
  else if(a=='y')
  {
    digitalWrite(9,HIGH);
    
  }
  else if(a=='w')
  {
    digitalWrite(10,HIGH);
    
  }
  else if(a=='v')
  {
    digitalWrite(11,HIGH);
    
  }
 
  }
  
}
