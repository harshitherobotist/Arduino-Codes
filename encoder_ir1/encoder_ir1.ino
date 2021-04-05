int counter=0;
unsigned long start_time = 0;
unsigned long end_time=0;
float rpm;

int temp,pre_counter=0;
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT_PULLUP);
Serial.begin(9600);
attachInterrupt(digitalPInToTnterrupt(2),);
}

void loop() {
  start_time = millis();
  end_time=start_time+1000;
  // put your main code here, to run repeatedly
  
while(millis() < end_time)
{
  if(digitalRead(2))
  {
    counter++;
    while(digitalRead(2));
  }
}
temp = counter - pre_counter;
rpm=(temp/20)*60;
pre_counter = counter;
Serial.println(rpm);
}  
