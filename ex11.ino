#define led_vermelho  7
#define led_verde        8     

void setup()
{
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_verde, LOW);
  Serial.begin(9600);
}

void loop()
{ 
  char data;

  while(Serial.available() == 0);
  data = Serial.read();
  logica_leds(data); 
}

void logica_leds(char letra)
{
  switch (letra) 
  {    
    case ‘R’:
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_verde, LOW);
      break;
    case ‘G’:
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_verde, HIGH);     
      break;
    case ‘B’:
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_verde, HIGH);      
      break;
    case ‘N’:
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_verde, LOW);
      break;
  }
}
