/* 
 *  W tym zadaniu wykorzystamy wyświetlacz w praktyczny sposób. Pierwszym celem jest odczytywanie analogowego sygnału z pinu A0
 *  za pomocą funkcji analogRead(0) a następnie w pierwszej lini wyświetlanie tej wartości.
 *  Drugim celem jest wyświetlenie w drugiej lini napisu "Pressed:" cały czas. 
 *  Po napisie tym wyświetlić należy napis {"Select", "Left", "Right", "Up", "Down"} w zależności od wciśniętego przycisku
 *  [Podane w odzielnym pliku zakresy przycisków są teoretyczne i należy je wcześniej sprawdzić]
 */

#include <LiquidCrystal.h>

//Przydatne Aliasy
#define pin_RS 8 
#define pin_EN 9 
#define pin_d4 4 
#define pin_d5 5 
#define pin_d6 6
#define pin_d7 7
#define pin_BL 10

// Inicjalizacja wyświetlacza odpowiednimi pinami
LiquidCrystal lcd( pin_RS,  pin_EN,  pin_d4,  pin_d5,  pin_d6,  pin_d7);

void setup() {
  //Ustawić wyświetlacz za pomocą funkcji begin()
  //*Wskazówka_1* -> Napis "Pressed:" najlepiej bd wyświetlić już w ciele funkcji setup()
}

void loop() {
  int x;
  x = analogRead (0);
  //*Wskazówka_2* -> Prawdopodobnie w początkowym zamyśle wartość x będzie po prostu wyświetlana i bez wciśnięcia przycisku będzie wynosić 1023
  //                 Z racji sposobu działania wyświetlacza odczytywanie wartości może być momentami trudne. Należy zastanowić się jak temu zapobiec

  //*Wskazówka_3* -> Przedziały działania przycisków pomimo tego że są nam znane ich wartości graniczne mogą się róznić dlatego polecam na początku 
  //                 Zobaczyć jakie dane pojawiają się w pierwszej lini przed pisaniem kodu odpowiedzialnego za wyświetlanie odpowiednich napisów.

  //*Wskazówka_4* -> Do pisania kodu odpowiedzialnego za wyświetlanie napisów w 2 lini polecam użyć if() oraz else if() pamiętając o własnościach 
  //                 jakimi rządzi się wyświetlacz

}
