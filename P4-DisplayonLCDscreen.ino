//Here in this project on how to display texts on lcd screen
//including the liquidcrystal library

#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
String text="Hello World!"; //initializing the text to be displayed

//setting up the void setup()
void setup(){
  lcd.begin(16,2);
  lcd.clear();
  lcd.print(text);
}

//void loop() function is not required
void loop() {
}
