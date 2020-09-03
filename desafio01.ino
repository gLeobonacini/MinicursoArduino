const int ledPin_yellow =  13; 
const int ledPin_green =  8; 
const int ledPin_red =  7; 
 
void setup() {
  pinMode(ledPin_yellow, OUTPUT);
  pinMode(ledPin_red, OUTPUT);
  pinMode(ledPin_green, OUTPUT);
  digitalWrite(ledPin_yellow,LOW);
  digitalWrite(ledPin_green,LOW);
  digitalWrite(ledPin_red,LOW);      
}
 
void loop() {
  digitalWrite(ledPin_yellow,LOW);
  digitalWrite(ledPin_red,HIGH)
  delay(25000);
  digitalWrite(ledPin_red,LOW);
  digitalWrite(ledPin_green,HIGH);
  delay(3000);
  digitalWrite(ledPin_green,LOW);
  digitalWrite(ledPin_yellow,HIGH);
  delay(15000);
}
