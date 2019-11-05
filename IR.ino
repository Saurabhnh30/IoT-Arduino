int IR_pin = 2;
int LED_pin = 12;
void setup() 
{  
  pinMode(IR_pin,INPUT);               
  pinMode(LED_pin, OUTPUT);           
   
  Serial.begin(9600);
}

void loop() 
{
  if(digitalRead(IR_pin)==HIGH)    
  {
    digitalWrite(LED_pin, LOW);   
  }
  else
  {
    digitalWrite(LED_pin, HIGH);    
  }
        
}
