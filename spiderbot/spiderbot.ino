#include<Servo.h>
Servo leg_1x;
Servo leg_1y;
Servo leg_2x;
Servo leg_2y;
Servo leg_3x;
Servo leg_3y;
Servo leg_4x;
Servo leg_4y;
int servo_pos=0;
void setup() {
  // put your setup code here, to run once:
leg_1x.attach(5);
leg_1y.attach(4);
leg_2x.attach(6);
leg_2y.attach(7);
leg_3x.attach(10);
leg_3y.attach(11);
leg_4x.attach(8);
leg_4y.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(servo_pos=0;servo_pos<180;servo_pos++)
  {
    leg_1x.write(servo_pos);
    leg_1y.write(servo_pos);
    leg_2x.write(servo_pos);
    leg_2y.write(servo_pos);
    leg_3x.write(servo_pos);
    leg_3y.write(servo_pos);
    leg_4x.write(servo_pos);
    leg_4y.write(servo_pos);
    delay(10);
  }

for(servo_pos=180;servo_pos>0;servo_pos--)
  {
    leg_1x.write(servo_pos);
    leg_1y.write(servo_pos);
    leg_2x.write(servo_pos);
    leg_2y.write(servo_pos);
    leg_3x.write(servo_pos);
    leg_3y.write(servo_pos);
    leg_4x.write(servo_pos);
    leg_4y.write(servo_pos);
    delay(10);
  }






}
