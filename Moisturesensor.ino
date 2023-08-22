
#include <LiquidCrystal.h>

LiquidCrystal lcd(4, 6, 10, 11, 12, 13);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  
}
void loop() {
int moisturelevel = analogRead (A0);
lcd.print("Percent Moisture");
lcd.setCursor(0, 2);
lcd.print(moisturelevel);
lcd.setCursor(0, 1);
delay(800);
Serial.println(analogRead(A0));
lcd.clear();
}





