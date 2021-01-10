#include <LiquidCrystal.h>

// LiquidCrystal(RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperature");
  lcd.setCursor(14,0);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Humidity");
  lcd.setCursor(14,1);
  lcd.print("%");
}

void loop() {

}
