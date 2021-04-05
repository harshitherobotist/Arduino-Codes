int sensor=2;
int sensor1=3;
int pulse,pulse1 =0;
unsigned long start_time, end_time=0;
float rpm,rpm1;
int ml_1=8;
int ml_2=9;
int mr_1=10;
int mr_2=11;
int enl=5;
int enr=6;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
attachInterrupt(digitalPinToInterrupt(sensor),counter,CHANGE);
attachInterrupt(digitalPinToInterrupt(sensor1),counter1,CHANGE);
pinMode(2,INPUT_PULLUP);
pinMode(3,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
start_time=millis();
if(start_time - end_time > 1000)
{
 detachInterrupt(sensor);
 detachInterrupt(sensor1);
 end_time = start_time;
 pulse=0;
 pulse1=0;
}
if (pulse>=40)
{
 analogWrite(6,0);
 delay(3000);
}
if (pulse1>=40)
{
 analogWrite(5,0);
 delay(3000);
}

attachInterrupt(digitalPinToInterrupt(sensor),counter,CHANGE);
attachInterrupt(digitalPinToInterrupt(sensor1),counter1,CHANGE);


digitalWrite(9,HIGH);
digitalWrite(10,HIGH);

analogWrite(5,150);
analogWrite(6,150);
}

void counter()
{
  pulse++;
}
void counter1()
{
  pulse1++;
}
