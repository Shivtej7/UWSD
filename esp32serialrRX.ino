char incomingChar;
void setup() 
{
  Serial.begin(9600);
 
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(22,OUTPUT);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(14,LOW);
  digitalWrite(27,LOW);
  digitalWrite(22,LOW);
}

void loop() 
{
  if (Serial.available()>0)
  {
    if(incomingChar != '\n')
    {
      char incomingChar = Serial.read();
      //Serial.print("Received: ");
      //Serial.println(incomingChar);
      if (incomingChar == 'F')
      {
        Serial.println(incomingChar);
        digitalWrite(13,HIGH);
        digitalWrite(12,LOW);
        incomingChar = '\0';
        //delay(200);
      }
      else if (incomingChar == 'R')
      {
        Serial.println(incomingChar);
        digitalWrite(13,LOW);
        digitalWrite(12,HIGH); 
        incomingChar = '\0';
        //delay(200);
      }
      else if (incomingChar == 'S')
      {
        Serial.println(incomingChar);
        digitalWrite(13,LOW);
        digitalWrite(12,LOW);
        digitalWrite(14,LOW);
        digitalWrite(27,LOW);
        incomingChar = '\0';
        //delay(200);
      }
      else if (incomingChar == 'L')
      {
        Serial.println(incomingChar);
        digitalWrite(14,HIGH);
        digitalWrite(27,LOW);
        incomingChar = '\0';
        //delay(200);
      }
      else if (incomingChar == 'r')
      {
        Serial.println(incomingChar);
        digitalWrite(14,LOW);
        digitalWrite(27,HIGH);
        incomingChar = '\0';
        //delay(200);
      }
      else if (incomingChar == 'U')
      {
        Serial.println(incomingChar);
        digitalWrite(16,HIGH);
        digitalWrite(17,LOW);
        incomingChar = '\0';
        //delay(200);
      }
      else if (incomingChar == 'D')
      {
        Serial.println(incomingChar);
        digitalWrite(16,LOW);
        digitalWrite(17,HIGH);
        incomingChar = '\0';
        //delay(200);
      }
    }
  }
  delay(500); // Adjust as needed
}
