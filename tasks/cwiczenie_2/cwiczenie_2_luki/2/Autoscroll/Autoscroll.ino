/*
  LiquidCrystal Library - Autoscroll
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 This sketch demonstrates the use of the autoscroll()
 and noAutoscroll() functions to make new text scroll or not.
 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi
 This example code is in the public domain.
 http://www.arduino.cc/en/Tutorial/LiquidCrystalAutoscroll
*/

//Przykład z biblioteki LiquidCrystal ze zmienionymi pinami inicalizującymi
//Zaprezentowany w celu demonstracji możliwości tego wyświetlacza
//Proszę przeanalizować przykład 


// załączenie biblioteki
#include <LiquidCrystal.h>

// zainicjalizowanie biblioteki poprzez przypisanie pinów arduino do pinów wyświetlacza

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // ustawienie kolumn i wierszy LCD
  lcd.begin(16, 2);
}

void loop() {
  // ustawienie kursora na (0,0)
  lcd.setCursor(0, 0);
  // wypisanie od 0 do 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
  }

  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // ustawienie wyświetlacza na automatyczne scroll'owanie
  lcd.autoscroll();
  // wypisanie od 0 do 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
  }
  // wyłączenie automatycznego scroll'owania
  lcd.noAutoscroll();

  // wyczyszczenie ekranu przed następną pętlą:
  lcd.clear();
}
