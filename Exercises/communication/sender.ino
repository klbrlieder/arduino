
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  
  if(Serial.available()) {
    
  	int resistance = Serial.parseInt();
    Serial.print("Received Resistance: ");
    Serial.println(resistance);
    if(resistance > 1000) {
      digitalWrite(8, HIGH);
    }  
    if(resistance < 1000) {
      digitalWrite(8, LOW);
    }
    
  }
}