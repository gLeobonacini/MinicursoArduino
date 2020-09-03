#define ledPin =  4; 
int intervalo = 500;          
 
void setup() {
  pinMode(ledPin, OUTPUT);      
}
 
void loop()
{ 
   digitalWrite(ledPin,HIGH);
   delay(intervalo);
   digitalWrite(ledPin,LOW);
   delay(intervalo);
}
