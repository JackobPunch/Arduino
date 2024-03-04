// Zadanie 1 
// Polega na zaświeceniu 3 diodami
// Wynikiem uruchomienia programu powinno wyglądać następująco:
// Włączenie czerwonej diody
// Odczekanie 1 sekundy
// Włączenie zielonej diody
// Odczekanie 1 sekundy
// Włączenie żółtej diody 


// Dyrektywa #define pozwala na zdefiniowanie symbolu, który
// będzie podmieniony przed kompliacją w każdym miejscu programu
// Dla przykładu każde wystąpienie red_diode zostanie zamienione na 13 
#define red_diode 13
#define green_diode 12
#define yellow_diode 11

// Instrukcje, które po uruchomieniu programu wykonają się tylko raz
void setup() {
  // Konfiguracja pinów 13, 12, 11 jako wyjście
  pinMode(red_diode, OUTPUT);
  pinMode(green_diode, OUTPUT);
  pinMode(yellow_diode, OUTPUT);

  // Ustawienie stanu wysokiego na pinie 13
  // Równoznaczne z włączeniem diody czerwonej
  digitalWrite(red_diode, HIGH); 

  delay(1000); // Odczekanie 1 sekundy
  digitalWrite(green_diode, HIGH); // Włączenie diody zielonej

  delay(1000); // Odczekanie 1 sekundy
  digitalWrite(yellow_diode, HIGH); // Włączenie diody żółtej
}
// Instrukcje, które po uruchomieniu programu będą wykonywać się w koło
void loop() {
  // W tym ćwiczeniu nie było potrzeby zapisania tutaj żadnej instrukcji
}
