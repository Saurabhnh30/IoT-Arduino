const int moistpin=A0;
void setup() 
{
pinMode(moistpin,INPUT);
Serial.begin(9600);
}

void loop() 
 {
  // put your main code here, to run repeatedly:
    long int per=analogRead(moistpin);
    per=map(per,1023,0,0,100) ;
    Serial.print(per);
    Serial.println("%");
    delay(1000);
 }
