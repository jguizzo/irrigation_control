#include <Wire.h>


 
const int AirValue = 3480;   //you need to replace this value with Value_1
const int WaterValue = 1300;  //you need to replace this value with Value_2
const int SensorPin = 36;
int soilMoistureValue = 0;
int soilmoisturepercent=0;
 
 
void setup() {
  Serial.begin(115200); // open serial port, set the baud rate to 9600 bps

}
 
 
void loop() 
{
soilMoistureValue = analogRead(SensorPin);  //put Sensor insert into soil
//Serial.println(soilMoistureValue);
delay(500);
soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
Serial.println(soilmoisturepercent);
}
