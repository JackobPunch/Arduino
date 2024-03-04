// Zadanie 3
// W tym zadaniu zostanie wprowadzony interfejs szeregowy UART. W skrócie pozwala on na komunikacje arduino z komputerem
// Zadanie będzie polegało na rozbudowaniu poprzedniego o wyświetalnie różnych komunikatów w zależności od wciśniętego przycisku.
// Program powinien:
// Przywitać się jednokrotnie zdaniem "Witam użytkowniku"
// Storzyć zmienną globalną typu string o nazwie "color", która przechowuje nazwe koloru ostanio włączonej diody
// Zmienna color startowo powinna zawierać wartość "Pusto"
// Zawartość zmiennej powina zostać wypisana przy każdym włączeniu diody
// W zadaniu należy użyć tylko jednej zmiennej

// Dodatkowe zadanie: W przypadku wciśnięcia 3 przycików na raz 
// w terminalu powinien wyświetlać komunikat "Nie wciskaj wszystkich przycisków jednocześnie"
// co 5 sekund.

#define red_diode 13
#define green_diode 12
#define yellow_diode 11

#define first_button 7
#define second_button 6
#define third_button 5

//Tutaj definiuje się zmienne globalne



void setup() {
  // Ustawienie pinów na wyjścia i wejścia
 
}

void loop() {
  // Kod dla diody czerwonej
 

  // Kod dla diody zielonej


  // Kod dla diody żółtej

  }
