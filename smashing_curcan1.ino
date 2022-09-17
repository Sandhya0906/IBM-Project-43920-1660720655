float aReading;
float tDigital;
float tCelcius;
int piezo = 7;
int led = 13;
int dcMotor = 8;
int tempSensor = A1;
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A1,INPUT);
}

void loop()
{ 
  aReading = analogRead(A1);
  tDigital = aReading*5.0/1023.0;
  tCelcius = (tDigital-0.5)*100;
  Serial.println("Temp value:"+String(tCelcius)+"C");
  if(tCelcius>25)
  {
    noTone(piezo);
    digitalWrite(led,HIGH);
    digitalWrite(dcMotor,HIGH);
  }
  else if(tCelcius<14)
  {
    tone(piezo,158);
  	digitalWrite(led,LOW);
    digitalWrite(dcMotor,LOW);
  }
   else
  {
    noTone(piezo);
  	digitalWrite(led,LOW);
    digitalWrite(dcMotor,LOW);
  } 
  delay(1000); 
}