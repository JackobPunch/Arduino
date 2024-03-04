/*  W tym zadaniu wykorzystamy wyświetlacz w praktyczny sposób. Pierwszym celem jest odczytywanie analogowego sygnału z pinu A0
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
  lcd.begin(16, 2);
  lcd.setCursor(0,1);
  lcd.print("Pressed:");
}

void loop() {
  int x;
  x = analogRead (0);
  lcd.setCursor(0,0); 
  if(x != 1023){
    lcd.print(x);
  }
  lcd.setCursor(8,1);
  if (x < 60) {
    lcd.print ("Right ");
  }
  else if (x < 210) {
    lcd.print ("Up    ");
  }
  else if (x < 410){
    lcd.print ("Down  ");
  }
  else if (x < 630){
    lcd.print ("Left  ");
  }
  else if (x < 830){
    lcd.print ("Select");
  }
}
