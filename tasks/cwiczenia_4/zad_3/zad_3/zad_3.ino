/*
 * Zadanie 3
 * Zadnie to poszerzać będzie zbiór poznanych czujników o kolejny, podobny do tego z
 * poprzedniego zadania, czujnik ciśnieni, temperatury i wysokości GY - BMP280.
 * Zadanie będzie polegało na:
 * - Połączeniu wyświetlacza i czujnika DHT22 na płytce
 * - Wyświetleniu zbieranych 3 pomiarów w formacie:
 *   H: [pomiar wysokości]m, P: [pomiar cisnienia]Pa
 *   Temperature: [pomiar temperatury] [ikona stopnia]C
 *   Pomiary powinny być pobierane i aktualizowane co 2 sekundy.
 */


// Biblioteka do czujnika. Należy zaimportować ją tak 
// jak w poprzednim zadaniu.
#include "i2c.h"
#include "i2c_BMP280.h"

#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);


BMP280 bmp;

float temperature;
float pascal;
float meters;

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
  // inicjalizacja lcd
  lcd.begin(16, 2);
  lcd.createChar(2, degree);

  //Sprawdzenie czy sensor jest połączony
  lcd.home();
  lcd.print("Test BMP280: ");
  if(bmp.initialize()) {
    lcd.print("Sensor found");
    bmp.triggerMeasurement();
  }
  else{
    lcd.print("Sensor missing");
    while (true){}
  }
}

void loop() {
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
  delay(2000);

}
