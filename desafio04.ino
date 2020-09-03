#include "Genius.h"

#define led_vermelho  7
#define led_verde     8
#define led_branco    9

void setup() {
  Serial.begin(9600);
  reiniciar();
  pinos(led_vermelho, led_verde, led_branco);
  Serial.println("***** Genius  *****");
}

void loop() {
  char caracter;

  Serial.print("Rodada ");
  Serial.println(rodada_atual);
  proxima_Rodada();
  reproduz_Sequencia();
  
  for(int i = 0; i < rodada_atual; i++)
  {
    while(Serial.available() == 0);
    caracter = Serial.read();

    switch (caracter)
    {
      case 'R':
        digitalWrite(pins[0], HIGH);
        delay(300);
        digitalWrite(pins[0], LOW);
        if (sequencia[i] == 0)
          perdeu = false;
        else
          perdeu = true; 
        break;
      case 'r':
        digitalWrite(pins[0], HIGH);
        delay(300);
        digitalWrite(pins[0], LOW);
        if (sequencia[i] == 0)
          perdeu = false;
        else
          perdeu = true; 
        break;
      case 'G':
        digitalWrite(pins[1], HIGH);
        delay(300);
        digitalWrite(pins[1], LOW);
        if (sequencia[i] == 1)
          perdeu = false;
        else
          perdeu = true; 
        break;
      case 'g':
        digitalWrite(pins[1], HIGH);
        delay(300);
        digitalWrite(pins[1], LOW);
        if (sequencia[i] == 1)
          perdeu = false;
        else
          perdeu = true; 
        break;
      case 'W':
        digitalWrite(pins[2], HIGH);
        delay(300);
        digitalWrite(pins[2], LOW);
        if (sequencia[i] == 2)
          perdeu = false;
        else
          perdeu = true; 
        break;
      case 'w':
        digitalWrite(pins[2], HIGH);
        delay(300);
        digitalWrite(pins[2], LOW);
        if (sequencia[i] == 2)
          perdeu = false;
        else
          perdeu = true; 
        break;
    }

    if (perdeu == true)
    {
      Serial.println("EROOOOOOU!!!");
      led_perdeu();
      reiniciar();
      break;
    }
    Serial.println("Acertou!!!");
  }
  delay(1000);
  if(rodada_atual == 100)
    led_ganhou();
}
