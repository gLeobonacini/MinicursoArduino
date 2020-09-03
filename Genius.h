bool perdeu = false;
int rodada_atual = 0;
int passo_atual_na_sequencia = 0;
int pins[3] = {0,0,0};
int sequencia[100];

void reiniciar();
void pinos(int, int);
void inicio();
void proxima_rodada();
void reproduz_Sequencia();
void led_perdeu();
void led_ganhou();

void reiniciar()
{
  int sequencia[100];
  rodada_atual = 0;
  passo_atual_na_sequencia = 0;
  perdeu = false;
}


void pinos(int LED_Vermelho, int LED_Verde, int LED_Branco)
{
  pins[0] = LED_Vermelho;
  pins[1] = LED_Verde;
  pins[2] = LED_Branco;
  pinMode(pins[0], OUTPUT);
  pinMode(pins[1], OUTPUT);
  pinMode(pins[2], OUTPUT);
  digitalWrite(pins[0], LOW);
  digitalWrite(pins[1], LOW);
  digitalWrite(pins[2], LOW);
  randomSeed(analogRead(0));
  inicio();
}

void inicio()
{
  for(int i = 0; i < 5; i++)
  {
    digitalWrite(pins[0], HIGH);
    digitalWrite(pins[1], HIGH);
    digitalWrite(pins[2], HIGH);
    delay(250);
    digitalWrite(pins[0], LOW);
    digitalWrite(pins[1], LOW);
    digitalWrite(pins[2], LOW);
    delay(250);
  }
}

void proxima_Rodada() 
{
    int numero_sorteado = random(0, 1000);
    sequencia[rodada_atual++] = (numero_sorteado%3);
}

void reproduz_Sequencia()
{
    for (int i = 0; i < rodada_atual; i++) 
    {
      digitalWrite(pins[sequencia[i]], HIGH);
      delay(500);
      digitalWrite(pins[sequencia[i]], LOW);
      delay(100);
    }
}

void led_perdeu()
{
  digitalWrite(pins[0],HIGH);
  delay(2000);
  digitalWrite(pins[0],LOW);
}


void led_ganhou()
{
  digitalWrite(pins[1],HIGH);
  delay(2000);
  digitalWrite(pins[1],LOW);
}
