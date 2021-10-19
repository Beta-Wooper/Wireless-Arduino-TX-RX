#define dataOut 12
#define ledPin 7

 void setup()
 {
   pinMode(dataOut, OUTPUT);     
   pinMode(ledPin, OUTPUT);    
 }

 void loop()
 {
   
     digitalWrite(dataOut, HIGH);
     digitalWrite(ledPin, HIGH);
     delay(2000);
     
     digitalWrite(dataOut,LOW);
     digitalWrite(ledPin, LOW);
     delay(2000);
 
 }