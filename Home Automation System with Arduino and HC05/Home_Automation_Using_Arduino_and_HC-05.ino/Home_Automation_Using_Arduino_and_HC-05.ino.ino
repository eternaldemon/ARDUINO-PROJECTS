int in1 = 2;
int in2 = 3;
char temp;
void setup() {
  pinMode(in1, OUTPUT);
  digitalWrite(in1, HIGH);
  pinMode(in2, OUTPUT);
  digitalWrite(in2, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.flush();
  if (Serial.available()>0)
  { temp= Serial.read();

  switch(temp)
  {case 'a':
      digitalWrite(in1, LOW);
      Serial.println("Relay 1 ON");
      break;
   case 'b':
      digitalWrite(in1, HIGH);
      Serial.println("Relay 1 OFF");
      break;
   case 'c':
      digitalWrite(in2, LOW);
      Serial.println("Relay 2 ON");
      break;
   case 'd':
      digitalWrite(in2, HIGH);
      Serial.println("Relay 2 OFF");
      break;
  }
  }
}
