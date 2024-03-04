//Zad_1
// Celem tego zadania jest wykorzystanie potencjometru do:
// - sterowania jasnością niebieskiej diody LED (użyć funkcji analogWrite()) .
// - sterowaniem częstotliwością świecenia czerwonej diody LED (podpowiedź: Użyć funkcji delay()i digitalWrite())
// Obie te funkcjonalności powinny działać jednocześnie
// Wartość ADC powinno wyswietlać się w terminalu
// Udzielić odpowiedzi na pytania


//Zmienna globalna przechowywująca odczyt ADC
int val = 0;


#define red_diode 7
#define potentiometer A0
#define blue_diode 9

void setup() {
  //Ustawienie red_diode i blue_diode jako wyjście

 
  Serial.begin(9600);
}

void loop() {
  // Sczytywanie wartości z ADC

 
  //Sterowanie  jasnością diody za pomocą potencjometru

  
  //Sterowanie opoznieniem gasniecia diody za pomocą potencjometru


  //Wyświetlanie wartości val w terminalu

}


// Pytania do zadania:
// Czemu przy powolnym stalym obracaniu potencjometrem dioda niebieska nie zmienia jasności płynnie?
// Co stanie się jeśli wyjdziemy w funkcji analogWrite() z zakresu 0-255?
