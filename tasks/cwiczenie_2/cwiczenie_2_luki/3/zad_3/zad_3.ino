/*
W zadaniu tym za pomocą wyświetlacza i diod zasymulujemy sygnalizację świetlną.
Program ma zaczynać się od zaświeconej czerwonej diody i napisu "STOP"
Po 3 sek ma zaświecić się dioda czerwona i żółta z napisem "READY"
Po kolejnych 3 sekundach mają zaświecić się wszystkie i powinien pojawić się napis "GO!!!"
*/

#include <LiquidCrystal.h>

#define red_diode 10
#define green_diode 12
#define yellow_diode 11

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  //Ustawienie red_diode, green_diode i yellow_diode jako wyjście

  // Startowe ustawienie stanu niskiego na pinach, aby upewnić się, że będą wyłączone

}

void loop() {
  // Wyświetlenie napisu „STOP” i zaświecenie czerwonej diody

  // Wyświetlenie napisu „READY” i zaświecenie żółtej diody

  // Wyświetlenie napisu „GO!!” i zaświecenie zielonej diody

}
