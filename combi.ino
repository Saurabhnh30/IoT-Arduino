int LDR = A0;
int IR_pin = 7;
int LED_A = 13;
int LED_B = 12;
void setup() 
{
  pinMode(LDR, INPUT);
  pinMode(IR_pin, INPUT );
  pinMode(LED_A, OUTPUT);
  pinMode(LED_B, OUTPUT); 
  Serial.begin(9600);
}

void loop() 
{
  int ldrStatus = analogRead(LDR);
  int flag;
  if (ldrStatus <= 200) 
   {
    digitalWrite(LED_A , HIGH);  
    Serial.print("LED ON \n");
    flag = true;
    delay(100);
   }
   else
   {  
     digitalWrite(LED_A , LOW);
     Serial.print("LED OFF \n");
       flag = false;
     delay(100);
   }

   if (flag == true)
   {
     if(digitalRead(IR_pin) == HIGH)    
       {
        digitalWrite(LED_B, LOW);
        Serial.print("IR ON \n");   
      }
       else
       {
        digitalWrite(LED_B, HIGH);
        Serial.print("IR OFF \n");   
       }
    }
    else
    {
       Serial.print("Somthing \n");
      }

}
