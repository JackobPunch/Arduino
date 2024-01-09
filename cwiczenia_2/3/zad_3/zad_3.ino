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
  pinMode(red_diode, OUTPUT);
  pinMode(green_diode, OUTPUT);
  pinMode(yellow_diode, OUTPUT);

  // Startowe ustawienie stanu niskiego na pinach, aby
  // upewnić się, że będą wyłączone
  digitalWrite(red_diode, LOW); 
  digitalWrite(green_diode, LOW);
  digitalWrite(yellow_diode, LOW);

 lcd.begin(16, 2);
 lcd.setCursor(0,0);
}

void loop() {
  lcd.clear();
  lcd.print("STOP  ");
  digitalWrite(red_diode, HIGH);
  digitalWrite(yellow_diode, LOW);
  digitalWrite(green_diode, LOW);

  delay(3000);

  lcd.clear();
  lcd.print("READY  ");
  digitalWrite(red_diode, HIGH);
  digitalWrite(yellow_diode, HIGH);
  digitalWrite(green_diode, LOW);

  delay(3000);
  
  lcd.clear();
  lcd.print("GO!!!  ");
  digitalWrite(red_diode, HIGH);
  digitalWrite(yellow_diode, HIGH);
  digitalWrite(green_diode, HIGH);

  delay(3000);
}
