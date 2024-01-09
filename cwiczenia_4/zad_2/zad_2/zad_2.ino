/*
 * Zdanie 2
 * Ćwiczenie wprowadza nowy element DHT22 - czujnik temperatury i wilgotności.
 * Zadanie będzie polegało na:
 * - Połączeniu wyświetlacza i czujnika DHT22 na płytce
 * - Wyświetleniu pomiarów temperatury i wilgotności na wyświetlaczu
 *   w formacie 
 *   [ikona termometru]: [pomiar temperatury] [ikona stopnia]C
 *   [ikona kropli]:     [pomiar wilgotności]%
 * Pomiary powinny być pobierane i aktualizowane co 5 sekund.
 */



#define DHTPIN 9
#define DHTTYPE DHT11

/* 
 * Jest to pierwsza styczność z dołączaniem biblioteki do kodu.
 * W przypadku arduino jeśli wcześniej nie pobrano jej lub zapisano
 * w odpowiedniej scieżce należy zrobić to w pierwszej kolejności.
 * Przeważnie robi się to za pomocą IDE, lecz aby mieć pewność co do
 * właściwej wersji wybranej biblioteki  w tym przypadku należy dodać biblioteke z folderu z zadaniami klikając:
 * Sketch -> Include Library -> Add .ZIP Library 
 */
 
// Biblioteka do obslugi czujnika DHTxx  
#include <DHT.h> 

//#include <LiquidCrystal.h>
//
//LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

// Obiekt klasy DHT o nazwie dht o podanych parametrach
DHT dht(DHTPIN, DHTTYPE);

byte thermometer[8] = {
  0b00100,
  0b00110,
  0b00100,
  0b00110,
  0b00100,
  0b01110,
  0b01110,
  0b00000
};

byte drop[8] = {
  0b00100,
  0b00100,
  0b01110,
  0b01110,
  0b10111,
  0b10111,
  0b01110,
  0b00000
};

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
//  lcd.begin(16, 2); 

  // napis kontrolny
//  lcd.print("Witam..."); 

  //Tworzenie znaków specjalnych
//  lcd.createChar(0, thermometer);
//  lcd.createChar(1, drop);
//  lcd.createChar(2, degree);

  // Inicjalizacja czujnika DHT
  dht.begin(); // inicjalizuję czujnik DHT
  Serial.begin(9600);
  Serial.print("Witam");
}

void loop(){
  delay(1000); 
  // Zmienna przechowująca temperature
  float temp = dht.readTemperature();
  // Zmienna przechowująca pomiar wilgotności
  float humidity = dht.readHumidity();

  // Sprawdzenie czy nie wystąpił błąd odczytu
  if (isnan(temp) || isnan(humidity)) {
    //Kursor na pozycje (0, 0) 
//    lcd.home(); 
//    lcd.print("Blad odczytu"); 
    return;
  }

//  lcd.home();
  // Rzutowanie ikony termometru na byte i wyświetlanie ją na LCD
//  lcd.write((byte)0);
//  lcd.print(" ");
  Serial.print("Cos");
  Serial.println(temp); 
//  lcd.print(" ");
//  lcd.write((byte)2); 
//  lcd.print("C");
//  lcd.setCursor(0, 1); 
//  lcd.write((byte)1); 
//  lcd.print(" ");
  Serial.print("halo");
  Serial.println(humidity);
//  lcd.print("  %");

}
