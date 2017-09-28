#include <stdlib.h>

int threshold = 350;

int sensorPin = A0;
int sensorValue = 0;
int temp;
int alarm = 2;

void setup() 
{
  Serial.begin(9600);
  temp = 0;
  pinMode(alarm, OUTPUT);
}

void loop() 
{
 sensorValue = analogRead(sensorPin);
 Serial.println(sensorValue);
 if (sensorValue < threshold)
  {
    digitalWrite(alarm, HIGH);
    Serial.println("Mail !!! Mail !!! Mail !!!");
    delay(3000);
  }
         
 else
  {
   
    digitalWrite(alarm, LOW);
    delay(500);
  } 
}
