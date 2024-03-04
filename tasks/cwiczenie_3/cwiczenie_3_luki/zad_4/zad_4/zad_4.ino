/* Celem tego ćwiczenia jest napisanie programu, w którym za pomocą potencjometru sterowane będzie wychylenie serwomechanizmu.
 * Krok 1: Podłączyć wyświetlacz tak jak na poprzednich ćwiczeniach.
 * Krok 2: Podłączyć potencjometr do arduino, aby można było odczytywać sygnał analogowy
 *         Dla pewności proszę sprawdzić za pomocą wyświetlacza lub terminalu czy wartości poprawnie się wyswietlają
 *         Pytanie: Czemu są to liczby z zakresu 0-1023?
 * Krok 3: Podłączyć serwomechanizm 
 * *Wskazówka* -> Tak jak wspomniano wcześniej wartości z potencjometru wynoszą 0-1023 a w zadaniu wartości muszą miescic sie
 *                w zakresie 0-180. Pomocna będzie tutaj funkcja map() */

// 1* Uzupełnić
// dołączenie bibliotek do obsługi serwomechanizmu i wyświetlacza LCD

Servo servo;
// 2* Uzupełnić
// zainicjalizować wyświetlacz LCD odpowiednio do załączonego schematu

int pos = 0;
int rot = 0;

void setup(){ 
  servo.attach(9);  
// 3* Uzupełnić
// inicjalizacja rodzaju wyświetlacza i ustawienie kursora w pierwszej komórce  
  lcd.print("Zadany kata");
} 
 
void loop(){   
  rot = analogRead(A5);
  pos = map(change, 0, 1023, 0,180);

// 4* Uzupełnić
// warunek sprawdzający czy wartość pozycji jest mniejsza niż 180
  {    
    servo.write(place); //Wykonaj ruch
    lcd.setCursor(6,1);
    lcd.print(String(place) + "  ");
  }     
  delay(200);  
              
}
