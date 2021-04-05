#include<LiquidCrystal.h>
int pot_val,counter;
unsigned long st,et=0;
const int en=11,rs=12,d4=4,d5=5,d6=6,d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
float pot1,rpm;
int temp,pre_counter=0;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
lcd.begin(16,2);
pinMode(2,INPUT);
pinMode(9,OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
pot_val=analogRead(A0);
pot1=pot_val*0.004;
float val=map(pot_val,0,1024,0,255);
analogWrite(9,val);
lcd.setCursor(0,0);
lcd.setCursor(0,1);
lcd.print(pot1);

lcd.print(rpm);
st = millis();
et =st+1000;
while(millis()<et)
{
 if(digitalRead(2))
 {
 counter++;
 while(digitalRead(2));
 }
}
temp=counter-pre_counter;
rpm=(temp/20)*60;
counter=pre_counter;

lcd.setCursor(0,0);
//lcd.print("pot_val=");
delay(100);
//lcd.setCursor(8,0);
//lcd.print(pot1);
//delay(100);
//lcd.setCursor(1,0);

//delay(1000);
lcd.clear();
}
