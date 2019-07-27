int relay1=2;
int relay2=3;
char temp;

void setup() 
{
pinMode(relay1,OUTPUT);
pinMode(relay2,OUTPUT);
digitalWrite(relay1,HIGH);
digitalWrite(relay2,HIGH);
Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
  temp = Serial.read();
  }

switch (temp)
{
  case '1':
    digitalWrite(relay1,LOW);
    Serial.println("Device 1 Turned ON");
    delay(1500);
    break;
  case '0':
    digitalWrite(relay1,HIGH);
    Serial.println("Device 1 Turned OFF");
    delay(1500);
    break;
  case '3':
    digitalWrite(relay2,LOW);
    Serial.println("Device 2 Turned ON");
    delay(1500);
    break;
  case '2':
    digitalWrite(relay2,HIGH);
    Serial.println("Device 2 Turned OFF");
    delay(1500);
    break;
    
}
  
}
