#include "LiquidCrystal.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

float value=0;

void setup()
{
   Serial.begin(9600);
   lcd.begin(16, 2);

}
void loop()
{

value = analogRead(A0);
  Serial.print("value =  ");
  Serial.print(value);
  float voltage =(value*40)/1024;
  Serial.print("       \t");
  Serial.print("voltage =  ");
  Serial.println(voltage);
  lcd.setCursor(0,1);
  lcd.print("value = ");
  lcd.print(value);
  lcd.setCursor(0,0);
  lcd.print("voltage = ");
  lcd.print(voltage);
  delay(1000);
}