/*
 * Zadanie 1
 * Tematem tego zadania będzie czujnik natężenia światła GY-302 - BH1750. 
 * Zadanie będzie polegało na:
 * - Połączeniu wyświetlacza lcd oraz czujnika do płytki
 * - Prezentowanie pomiaru czujnika na wyświetlaczu w formacie:
 *   "Light: [pomiar czujnika] lux"
 *   Dane powinny być aktualizowane co 1.5 sekundy.
 * - Gdy pomiar mieści się w przedziale <50, 100>
 *   dioda wbudowana zostaje uruchomiona
 */


#include <LiquidCrystal.h>
//Biblioteki przeznaczone do czujnika natężenia światła
#include <Wire.h>
#include <BH1750.h>

#define DIODE 13

BH1750 light_sensor;

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  // inicjalizacja lcd
  lcd.begin(16, 2); 

  // napis kontrolny
  lcd.print("Witam..."); 

  // inicjalizacja sensoru
  light_sensor.begin();

  pinMode(DIODE, OUTPUT);
  digitalWrite(DIODE, LOW);
}

void loop() {
  int lux = light_sensor.readLightLevel();

  lcd.clear();
  lcd.home();
  lcd.print("Light: ");
  lcd.print(lux);
  lcd.print(" lux");
  if( lux < 100 and lux > 50){
    digitalWrite(DIODE, HIGH);
  }
  else{
    digitalWrite(DIODE, LOW);
  }
  delay(1000);
  

}
