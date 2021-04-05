int servo1_val,joy_x_val,joy_y_val;
#include<Servo.h>
Servo s1;
Servo s2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
s1.attach(9);
s2.attach(10);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//map(servo1_val,0,360,0,
joy_x_val=analogRead(A0);
Serial.print(joy_x_val);
joy_y_val=analogRead(A1);
Serial.print("\t");
Serial.println(joy_y_val);
map(joy_x_val,0,1023,0,180);
map(joy_y_val,0,1023,0,180);
s1.write(joy_x_val);
s2.write(joy_y_val);
}
