
int Led=12;//set up pin for LED output (any Digital pin can be used)
int micsensorpin=3; //setup pin for input from Sensor D0
int micState;//set up a variable to hold info from D0 (HIGH or LOW)
boolean LEDStatus=false;
void setup()
{
pinMode(Led,OUTPUT);// set up the LED pin to be an output
pinMode(micsensorpin,INPUT);//set up the sensor pin to be an input
digitalWrite(micsensorpin,LOW); //start with the sensor pin off
digitalWrite(Led,LOW); //start with the LED off
}
void loop()
{
  int statusSensor = digitalRead (micsensorpin);
micState=digitalRead(micsensorpin);//check if the mic sensor is on or off
if(statusSensor == 1)//
{
  if(LEDStatus==false){
    LEDStatus=true;
digitalWrite(Led,HIGH);
delay(250);
}
else
{
  LEDStatus=false;
digitalWrite(Led,LOW);
delay(300);
Serial.println(analogRead(A0));
}}}
