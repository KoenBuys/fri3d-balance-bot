int INA = 2;
int INB = 15;
 
void setup()
{
pinMode(INA,OUTPUT);
pinMode(INB,OUTPUT);
}
 
void loop()
{
digitalWrite(INA,LOW);
digitalWrite(INB,HIGH);
delay(1000);
}
