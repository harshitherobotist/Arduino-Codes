int in1=5;
int in2=4;
int en=6;
int ir1;
void setup() {
  // put your setup code here, to run once:
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(en,OUTPUT);
pinMode(ir1,INPUT);
digitalWrite(6,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(7)==LOW)
  {
  
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
Serial.println(1);
  }
  else if(digitalRead(7)==HIGH)
  {
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
Serial.println(0);
 }
}
