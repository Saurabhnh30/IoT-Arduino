 const int ledPin = 13;
 const int ldrPin = A0;
 void setup() 
 {
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
 }
 void loop() {
  int ldrStatus = analogRead(ldrPin);
  Serial.print("LDR");
   if (ldrStatus <= 200) 
   {
    digitalWrite(ledPin, HIGH);  
    Serial.print("LED ON"); 
    }
   else
   {  
     digitalWrite(ledPin, LOW);
     Serial.print("LED OFF");
   }
 }
