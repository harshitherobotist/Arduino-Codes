int sensor1=3;
volatile int pulse1 = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
//pinMode(sensor1,INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(sensor1),counter,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

detachInterrupt(sensor1);
Serial.println(pulse1);
attachInterrupt(digitalPinToInterrupt(sensor1),counter,CHANGE);
//upulse1=0;
}
void counter()
{
 pulse1=pulse1+1;
}
