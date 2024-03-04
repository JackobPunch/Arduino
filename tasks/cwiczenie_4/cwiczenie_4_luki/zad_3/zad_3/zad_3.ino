/*
 * Zadanie 3
 * Zadnie to poszerzać będzie zbiór poznanych czujników o kolejny, podobny do tego z
 * poprzedniego zadania, czujnik ciśnieni, temperatury i wysokości GY - BMP280.
 * Zadanie będzie polegało na:
 * - Połączeniu wyświetlacza i czujnika DHT22 na płytce
 * - Wyświetleniu zbieranych 3 pomiarów w formacie:
 *   H: [pomiar wysokości]m, P: [pomiar cisnienia]Pa
 *   Temperature: [pomiar temperatury] [ikona stopnia]C
 *   
 * Pomiary powinny być pobierane i aktualizowane co 2 sekundy.
 */


#include <Wire.h>
// Biblioteka do czujnika. Należy zaimportować ją tak 
// jak w poprzednim zadaniu.
#include "i2c.h"
#include "i2c_BMP280.h"


// Obiekt klasy BMP280
BMP280 bmp;


// Zmienne globalne które zawierają pomiary
// temperatury, cisnienia i wysokosci:


// Znak specjalny stopnia
byte degree[8] = {
  0b00010,
  0b00101,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

void setup() {
  //Sprawdzenie czy sensor jest połączony
  lcd.home();
  lcd.print("Test BMP280: ");
  if(bmp.initialize()) {
    lcd.print("Sensor found");
  }
  else{
    lcd.print("Sensor missing");
    while (true){}
  }
  
}

void loop() {
  // Kod realizujący wyświetlanie pomiarów
  // w odpowiednim formacie
  bmp.awaitMeasurement();

  bmp.getTemperature(temperature);

  bmp.getPressure(pascal);

  bmp.getAltitude(meters);

  bmp.triggerMeasurement();

  lcd.clear();
  lcd.home();
  lcd.print("H: ");
  lcd.print(meters);
  lcd.print("m, P: ");
  lcd.print(pascal);
  lcd.print("Pa");
  lcd.setCursor(0,1);
  lcd.print("Temperature: ");
  lcd.print(temperature);
  lcd.print(" ");
  lcd.write((byte)2); 
  lcd.print("C");
}
