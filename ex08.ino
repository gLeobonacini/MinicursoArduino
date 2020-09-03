#define led0  7
#define led1  8     
#define led2  13
#define pot    0

float ADC = 0;
int x = 0;

void setup()
{
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  digitalWrite(led0, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void loop()
{  
  x = analogRead(pot);
  ADC = (float)(x*5)/1023;

  if (ADC <= 1.25)
  {
    digitalWrite(led0,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }
  else if (ADC <= 2.5)
  {
    digitalWrite(led0,HIGH);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }
  else if (ADC <= 3.75)
  {
    digitalWrite(led0,HIGH);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }
  else
  {
    digitalWrite(led0,HIGH);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  }
}
