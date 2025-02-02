//Here we knowlegde ourselves on how to display custom texts on LCD screen

#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
String text=""; //input of any desired text

void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
  lcd.print(text);
}
//void loop() function is employed to print out the char of texts continuously
void loop() 
{
  if (Serial.available())
  {
    char inChar=(char)Serial.read();
    text+=inChar;
    if(inChar=='\n')
    {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(text);
      Serial.println(text);
      text="";
    }
  }
}
