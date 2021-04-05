float vout_val;
int r1=10000;
int vin=1023;
float temp,r2_val,temp1;
float A=1.00924522e-03;
float B=2.378405444e-04;
float C=2.019202697e-07;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
vout_val=analogRead(A0);
Serial.print("Voltage Output=  ");
Serial.print(vout_val);
r2_val = r1*((vin/vout_val)-1);
temp=(1/(A+B*log(r2_val)+C*(log(r2_val)*log(r2_val)*log(r2_val))));
temp1 = temp-273.0;
Serial.print("\t");
Serial.print("temperature=  ");
Serial.println(temp1);


}
