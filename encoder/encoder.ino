int sensor1 = 3;
int sensor2 = 2;
int i = 0,j = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor1,INPUT_PULLUP);
pinMode(sensor2,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(sensor1))
{
  i=i+1;
  while((digitalRead(sensor1)));
  }
if(digitalRead(sensor2))
  {
  j=j+1;
  
  while((digitalRead(sensor2)));
  }
Serial.print(i);
Serial.print("\t");
Serial.println(j);
}
