#define led 9

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{  
  int i = 0;
  
  for(i = 0; i  <= 255; i++)
  {
      analogWrite(led, i);
      delay(20);
   }
   for(i = 255; i  >= 0; i++)
   {
      analogWrite(led, i);
      delay(20);
   }
}


