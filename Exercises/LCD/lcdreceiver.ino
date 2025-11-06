
#include <LiquidCrystal.h>

int seconds = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  Serial.begin(9600);
  lcd_1.begin(16, 2); 
  lcd_1.setCursor(0, 0);
  lcd_1.print("Hello World!");
  
  
}

void loop()
{
 
	lcd_1.setCursor(0,2);
  	 lcd_1.print("    ");
  
  if(Serial.available()) {
    
    lcd_1.setCursor(0, 2);
   
    int resistance = Serial.parseInt();
    lcd_1.print(resistance);
  }
  
  
  
  delay(1000);
 
}

