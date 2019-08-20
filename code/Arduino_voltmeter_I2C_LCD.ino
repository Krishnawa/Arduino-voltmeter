#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

float value=0;
void setup()
{
  Serial.begin(9600);
    lcd.begin();

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