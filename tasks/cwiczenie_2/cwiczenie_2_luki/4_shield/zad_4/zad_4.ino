/* 
 *  Zadanie to pokaże mnogość sposobów na prezentowanie danych. W zadaniu tym zostanie wprowadzony sensor dzwięku.
 *  Dane jakie zostaną z niego zebrane należeć będzie wyświetlić nie tylko w terminalu, ale także bezpośrednio na wyświetlaczu.
 *  W terminalu ma wyświetlać się wartość odczytywna z pinu A1
 *  Wyświetlanie na LCD ma być w formie:
 *  Pierwsza linijka ma zaczynać się od napisu "Pomiar:" a zaraz potem wartość analogowa
 *  W drugiej lini należy w zależności od wielkości zebranej z sensoru należy wyświetlić jeden z 3 specjalnych znaków
byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};                    

byte ohm[8] = {
  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B01010,
  B11011,
  B00000
};

byte heart[8] = {
  B00000,
  B01010,
  B10101,
  B10001,
  B10001,
  B01010,
  B00100,
  B00000
};
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
#define sound_sensor A1

// Inicjalizacja wyświetlacza odpowiednimi pinami
LiquidCrystal lcd( pin_RS,  pin_EN,  pin_d4,  pin_d5,  pin_d6,  pin_d7);

int sensor_status = 0;

byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};
byte ohm[8] = {
  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B01010,
  B11011,
  B00000
};

byte heart[8] = {
  B00000,
  B01010,
  B10101,
  B10001,
  B10001,
  B01010,
  B00100,
  B00000
};

void setup() {
 //Inicjalizacja monitora, wyświetlacza, utworzenie znaków i wyświetlenie napisu „Pomiar:”

}
void loop() {
//Odczytanie wartości z sensora i wyświetlenie jej we właściwych miejscach

//Ustawienie wyświetlania znaków zależnych od wartości

}
