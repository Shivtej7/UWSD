#include<SoftwareSerial.h>

#define forwardPin 11
#define reversePin 7
#define leftPin 8
#define rightPin 10
#define stopPin 9
#define upPin 13
#define downPin 12
#define enablePin 2

SoftwareSerial mySerial(3,4);

void setup() 
{
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode(forwardPin,INPUT_PULLUP);
  pinMode(reversePin,INPUT_PULLUP);
  pinMode(leftPin,INPUT_PULLUP);
  pinMode(rightPin,INPUT_PULLUP);
  pinMode(stopPin,INPUT_PULLUP);
  pinMode(upPin,INPUT_PULLUP);
  pinMode(downPin,INPUT_PULLUP);
  pinMode(enablePin,OUTPUT);

  digitalWrite(enablePin,HIGH);
}

void loop() 
{
  if (digitalRead(forwardPin) == 0)
  {
    mySerial.println("F");
    delay(1000);
  }
  else if (digitalRead(reversePin) == 0)
  {
    mySerial.println("R");
    delay(1000);
  }
  else if (digitalRead(leftPin) == 0)
  {
    mySerial.println("L");
    delay(1000);
  }
  else if (digitalRead(rightPin) == 0)
  {
    mySerial.println("r");
    delay(1000);
  }
  else if (digitalRead(stopPin) == 0)
  {
    mySerial.println("S");
    delay(1000);
  }
  else if (digitalRead(upPin) == 0)
  {
    mySerial.println("U");
    delay(1000);
  }
  else if (digitalRead(downPin) == 0)
  {
    mySerial.println("D");
    delay(1000);
  }

}
