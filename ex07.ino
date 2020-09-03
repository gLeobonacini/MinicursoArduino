#define led1 = 8;
bool state = 1;
 
void interrupcao(){
  state =!state;
}

void setup() {
   attachInterrupt(0,interrupcao,RISING); 
}
void loop() {
  digitalWrite(led1, state);  
}

void interrupção()
{
    state = !state;
}
