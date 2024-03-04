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

/*
 * Przed przystąpieniem do zadania pomocne może okazać się przeglądnięcie
 * przykładu, które dostarczane jest przez IDE wraz z inportem każdej biblioteki
 * Aby zobaczyć taki przykład należy kliknąć:
 * File -> Examples -> DHT sensor library
 */

#define DHTTYPE DHT22

/* 
 * Biblioteka do obslugi czujnika DHTxx  
 * W tym zadaniu zimportujemy bibliotekę na inny sposób.
 * W przypadku bibliotek w arduino jeśli wcześniej nie pobrano jej i zapisano
 * w odpowiedniej scieżce należy zrobić to w pierwszej kolejności.
 * Przeważnie robi się to za pomocą IDE, lecz tym razem nie będzie ona dostępna na starcie.
 * Dostęp do niej uzyskamy przez import za pomocą pliku .ZIP.
 * Aby mieć pewność co do właściwego wyboru biblioteki są one już pobrane i gotowe do importu za pomocą:
 * Sketch -> Include Library -> Add .ZIP Library 
 * 
 * (Należy dodać obie biblioteki ponieważ współpracują ze sobą)
 */

#include <DHT.h> 

#include <LiquidCrystal.h>

// Kod tworzący obiekt klasy LiquidCrystal o nazwie lcd:


// Obiekt klasy DHT o nazwie dht o podanych parametrach
DHT dht(DHTPIN, DHTTYPE);



// Znaki specjalne 
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
  // inicjalizacja wyświetlacza lcd:

  // napis kontrolny
  lcd.print("Witam..."); 

  //Tworzenie znaków specjalnych


  // Inicjalizacja czujnika DHT
  dht.begin(); 
}

void loop(){
  // Zmienne przechowujące temperature i wilgotności:
 
  // Sprawdzenie czy nie wystąpił błąd odczytu
  if (isnan(temp) || isnan(humidity)) {
    // Kod odpowiedzialny za wyświetlenie komunikatu błędu
    // na wyświetlaczu:
  }

  // Kod odpowiedzialny za wyświetlanie wiadomości o wartosciach pomiarow
  // w odowiednim formacie:


}
