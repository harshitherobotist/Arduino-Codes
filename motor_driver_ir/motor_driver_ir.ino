int in1=5;
int in2=4;
int in3=8;
int in4=9;
int en2=10;
int en1=6;
int ir1=7;
int ir2=11;
void setup() {
  // put your setup code here, to run once:
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(en1,OUTPUT);
pinMode(en2,OUTPUT);
pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
digitalWrite(en1,HIGH);
digitalWrite(en2,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(7)==HIGH && digitalRead(11)==HIGH)
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
  }
  if(digitalRead(7)==LOW && digitalRead(11)==HIGH)
  {
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
  }
  if(digitalRead(7)==HIGH && digitalRead(11)==LOW)
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  }
  if(digitalRead(7)==LOW && digitalRead(11==LOW))
  {
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  }
}
