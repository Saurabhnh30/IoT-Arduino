int PIR_pin = 7;
int LED_pin = 12;
void setup() 
{
  pinMode(PIR_pin,INPUT);
  pinMode(LED_pin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int var1 = digitalRead( PIR_pin);
  Serial.println(var1);
  if (var1 == 1)
  {
    digitalWrite(LED_pin, LOW);
  }
  else
  {
    digitalWrite(LED_pin, HIGH);
    }
}
