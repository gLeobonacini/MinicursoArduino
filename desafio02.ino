#define ledPin 13

void setup(){
   pinMode(ledpin,OUTPUT);
   digitalWrite(ledPin,LOW)
}

void loop(){
   int ldr = analogRead(A0);
   if (ldr > 200){
	digitalWrite(ledPin,HIGH);
   }
   else{
	digitalWrite(ledPin,HIGH);
   }
}