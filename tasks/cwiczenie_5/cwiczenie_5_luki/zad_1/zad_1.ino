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
 *   
 * Program powinien zaczynać się od powitania "Witam..."
 */


//Biblioteki przeznaczone do czujnika natężenia światła:
#include <Wire.h>

/*
 * Podobnie jak w jednym z poprzednich zadań biblioteka ta nie będzie dostępna
 * na samym początku. Tym razem importowanie zostawimy IDE. Klikamy
 * Sketch -> Include Library -> Manage Libraries...
 * oraz wpisujemy nazwe biblioteki.
 */
#include <BH1750.h>


// Obiekt klasy BH1750
BH1750 light_sensor;


void setup() {
  // inicjalizacja sensoru
  light_sensor.begin();

  // Kod związany z wyświetlaczem i diodą:
  
}

void loop() {
 // Kod zczytujący zczytujący pomiar, wyswietlajacy go i w przypadku 
 // opisanym w zadniu zaswiecajacy diode

}
