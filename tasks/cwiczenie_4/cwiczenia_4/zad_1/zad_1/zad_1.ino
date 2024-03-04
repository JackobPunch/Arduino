/*
 * Zadanie 1
 * Ćwiczenie wprowadza nowy element elektroniczny jakim jest buzzer.
 * Są różne typy buzzerów, ale w tym przykładzie będzie to moduł
 * z buzzerem aktywnym z generatorem.
 * Ćwiczenie polega na:
 * - połączeniu buzzera, przycisku i czerwonej diody led na płytce.
 * - Napisaniu kodu, który będzie włączał diode i dawał sygnał dzwiękowy 
 *   przez 2 sekundy w momencie wciśnięcia przycisku.
 *   
 * Prosze użyć do tego celu funkji digitalWrite().
 * Nie jest to natomiast jednyny sposób na kontrolowanie buzzera.
 * Po zrealiowaniu tego ćwiczenia prosze przejść dół tego pliku.
 * Jest tam przykład pokazujący możliwości buzzera, dzięki któremu jest się
 * w stanie odegrać proste melodie.
 */

// W niektórych plikach można było zaobserwować definiowanie różnych pinów
// Za pomocą małych liter. Oba podejścia są poprawne, ale należy pamietać
// Żeby przyjąć jedno podejście i tylko je stosować przez cały program.

#define DIODE 13
#define BUTTON 7
#define BUZ_PIN 8

void setup(){
  pinMode(BUZ_PIN, OUTPUT);
  pinMode(DIODE, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);     

  digitalWrite(DIODE, LOW);
}

void loop(){
  if(digitalRead(BUTTON) == LOW){
    digitalWrite(BUZ_PIN, LOW);
    digitalWrite(DIODE, HIGH);
    delay(2000);
    digitalWrite(BUZ_PIN, HIGH);
    digitalWrite(DIODE, LOW);
  }
}














//----------Przykłady----------

// PRZYKŁAD A

/*
 * W przykładzie potrzebna będzie nam plik "pitches.h".
 * Jest on niezbędny ponieważ rozwiązuje problem częstotliwości nut.
 */
 
//#include "pitches.h"
//
//#define BUZ_PIN 8
//
//// Sekwencja nut w melodii
//int melody[]{
//  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
//};
//
//// Długości nut
//// 4 - ćwierćnuta
//// 8 - ósemka
//int note_durations[] = {
//  4, 8, 8, 4, 4, 4, 4, 4
//};
//
//
//void setup(void)
//{
//  pinMode(BUZ_PIN, OUTPUT);
//  digitalWrite(BUZ_PIN, HIGH);
//  //iterujemy po nutach w melodii
//  for (int thisNote = 0; thisNote < 8; thisNote++){
//
//    // Aby obliczyć czas nuty, należy podzielić sekunde przez typ nuty
//    // Przypomnieniem jest tutaj fakt, że w arduino wszelki czas jest w
//    // milisekundach dlatego 1000 w kodzie odpowiada 1 sekundzie w rzeczywistości
//    int duration = 1000 / note_durations[thisNote];
//    
//    tone(BUZ_PIN, melody[thisNote], duration);
//
//    // Dla w pełni działającego  programu należy również ustawić minimalny
//    // czas pomiędzy nutami, aby w ogóle można było je rozróżnić.
//    int pause = duration * 1.3;
//    delay(pause);
//    //Zatrzymujemy gre nuty
//    noTone(BUZ_PIN);
//
//    delay(80);
//    digitalWrite(BUZ_PIN, HIGH);
//}
//}
//void loop()
//{
//  // Tutaj nie jest to potrzebny kod.
//}





// PRZYKŁAD B
/*
 * W poprzednim przykładzie jest jeden problem.
 * Za każdym razem, gdy chcemy odegrać naszą melodie
 * musimy restartować kod. Oczywiście można umieścić kod
 * w funkcji loop(), ale jak byliśmy w stanie się już przekonać 
 * w tej funkji jest przeważnie dużo kodu i dodawanie takich porcji
 * kilka razy może się skończyć różnie. W tym jak i innym języku 
 * na ratunek przychodzi wrzucenie kodu do funkcji.
 */


//#include "pitches.h"
//
//#define BUZ_PIN 8
//// Sekwencja nut w melodii
//int melody[]{
//  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
//};
//
//// Długości nut
//// 4 - ćwierćnuta
//// 8 - ósemka
//int note_durations[] = {
//  4, 8, 8, 4, 4, 4, 4, 4
//};
//
//
//void setup(void)
//{
//  pinMode(BUZ_PIN, OUTPUT);
//  
//}
//void loop()
//{
//  
//  music();
//  delay(80);
//  digitalWrite(BUZ_PIN, HIGH);
//  delay(4000);
//}
//
//
//void music(){
//    //iterujemy po nutach w melodii
//  for (int thisNote = 0; thisNote < 8; thisNote++){
//
//    // Aby obliczyć czas nuty, należy podzielić sekunde przez typ nuty
//    // Przypomnieniem jest tutaj fakt, że w arduino wszelki czas jest w
//    // milisekundach dlatego 1000 w kodzie odpowiada 1 sekundzie w rzeczywistości
//    int duration = 1000 / note_durations[thisNote];
//    
//    tone(BUZ_PIN, melody[thisNote], duration);
//
//    // Dla w pełni działającego  programu należy również ustawić minimalny
//    // czas pomiędzy nutami, aby w ogóle można było je rozróżnić.
//    int pause = duration * 1.3;
//    delay(pause);
//    //Zatrzymujemy gre nuty
//    noTone(BUZ_PIN);
//  }
//}
