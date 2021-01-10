#include <LiquidCrystal.h>
#include <dht.h>

dht DHT;

// LiquidCrystal(RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define DHT11_PIN 7

void setup() {
  Serial.begin(9600);
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
  int chk = DHT.read11(DHT11_PIN);
  int temp = DHT.temperature;
  int hum = DHT.humidity;
  lcd.setCursor(12,0);
  lcd.print(temp);

  lcd.setCursor(12,1);
  lcd.print(hum);
  delay(5000);
}
