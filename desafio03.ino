#define led 9
#define pot 0

int Vadc = 0;
float Vpwm = 0;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{    
  Vadc = analogRead(pot);
  Vpwm = (float)(Vadc*255)/1023;
  analogWrite(led,(int)Vpwm);
  delay(200);
}
