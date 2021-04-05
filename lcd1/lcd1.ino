#include<LiquidCrystal.h>
int pot_val;
const int en=11,rs=12,d4=4,d5=5,d6=6,d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
pot_val=analogRead(A0);
lcd.print(pot_val );
}
