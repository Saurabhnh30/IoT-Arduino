const int trigger=7;
const int echo=6;
long duration,inches,cm;
void setup() 
 {
   pinMode(trigger,OUTPUT);
   pinMode(echo,INPUT);
   Serial.begin(9600);
 }
void loop() 
 {
   digitalWrite(trigger,LOW);
   delayMicroseconds(100);
   digitalWrite(trigger,HIGH);
   delayMicroseconds(100);
   digitalWrite(trigger,LOW);
   pinMode(echo,INPUT);
   duration=pulseIn(echo,HIGH);
   cm=(duration/2)/29.1;
  inches=(duration/2)/74;

      Serial.print("Duration:");
       Serial.print(inches);
        Serial.print(" inches ");
         Serial.print(cm);
          Serial.println(" cm");
          delay(1000);
}
