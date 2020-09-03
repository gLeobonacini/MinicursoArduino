void setup()
{
  Serial.begin(9600);    
}

void loop()
{
  ASCII();
  while(1);
}

void ASCII()
{
  Serial.println("\n\nASCII\n");
  for(int i = 0; i < 256; i++)
  {
    Serial.print(i);
    Serial.print(" = ");
    Serial.print(i,BIN);
    Serial.print(" = ");
    Serial.println(char(i)); 
  }  
}
