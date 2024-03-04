/* 
 *  Zadanie 3 
 *  Na jednym z poprzednich laboratoriów poznano serwomechanizmy. W tym zadaniu wykorzystamy 2 takie elementy
 *  w połączeniu z nowym elementem jakim jest Joystick. Pierwszy serwomechanizm będzie reprezentował 
 *  poruszanie się po osi X a drugi osi Y.
 *  Zadanie będzie polegało na:
 *  - Połączeniu 2 serwomechanizmów oraz joysticku do płytki stykowej
 *  - Napisaniu kodu realizującego zadanie 
 */


//Importowanie biblioteki dotyczącej serwomechanizmów oraz tworzenie obiektów tej klasy:

  

// Zmienna globalna przechowująca wartości zczytywane z serwomechanizmów
int servoVal;
  
void setup() 
{
  servo1.attach(3);
  servo2.attach(5);
}
  
void loop()
{
  // Kod realizujący zadanie. Podpowiedź: Najlepiej użyć funkcji map()
  // oraz warto pamietać o mimalnej przerwie dla poprawności odczytu.
}
