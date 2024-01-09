/*
 * Zadanie 3
 * Celem tego ćwiczenia jest przejęcie kontroli nad serwomechanizmem. 
 * Krok 1: Podłączyć wyświetlacz tak jak na poprzednich ćwiczeniach.
 * Krok 2: Podłączyć potencjometr do arduin, aby można było odczytywać sygnał analogowy
 *         Dla pewności proszę sprawdzić za pomocą wyświetlacza lub terminalu czy wartości poprawnie się wyswietlają
 *         Pytanie: Czemu są to liczby z zakresu 0-1023?
 * Krok 3: Podłączyć serwomechanizm 
 * 
 * Zadaniem będzie napisanie programu w którym za pomocą potencjometru będziemy sterować wychleniem serwomechanizmu.
 * 
 * *Wskazówka* -> Tak jak wspomniano wcześniej wartości z potencjometru wynoszą 0-1023 a w zadniu wartości muszą miescic sie
 *                w zakresie 0-180. Pomoca będzie tutaj funkcja map()
 * 
 */


#include <Servo.h>
#include <LiquidCrystal.h>
 
Servo servo;
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

int place = 0;
int change = 0; 
 
void setup() 
{ 
  servo.attach(9);  
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Zadany kata");
} 
 
void loop() 
{  
  change = analogRead(A5);
  place = map(change, 0, 1023, 0,180);
  
  if (place < 180) {
    servo.write(place); //Wykonaj ruch
    lcd.setCursor(6,1);
    lcd.print(String(place) + "  ");
  }     
  delay(200);                      
}
