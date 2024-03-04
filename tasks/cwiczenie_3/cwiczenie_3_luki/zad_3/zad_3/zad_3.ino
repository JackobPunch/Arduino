/* Cel zadania to stopniowe poruszanie serwem. Program będzie poruszał serwem tak aby co 0.2s kąt zmieniał  sie o 6 stopni.
   a po osiagnieciu 180 wrócił do pozycji 0. Dodatkowo diody będą sygnalizowały położenie serwomechanizmu.*/

#include <Servo.h> // dołączenie biblioteki do obsługi serwomechanizmu

// 1* Uzupełnić
//  definicje diod do odpowiednich pinów Arduino zgodnie ze schematem

Servo servo; // deklaracja obiektu klasy Servo

int pos = 0; // zmienna przechowująca aktualną pozycję serwomechanizmu
int rot = 6; // zmienna przechowująca wartość obrotu

void setup() {
  servo.attach(9);
  // 2* Uzupełnić
  // ustawienie kierunkowości pinów diód na wyjściowy i ustawienie na wszystkich diodach stanu niskiego
  Serial.begin(9600);
}

void loop() {
  if (pos < 180) {
    servo.write(place);
  }
  else {
    pos = 0;
  }
  // 3* Uzupełnić
  // zaktualizowac wartość zmiennej przechowującej pozycje i wyświetlić aktualną wartość w konsoli
  if(pos < 90){
  // 4* Uzupełnić
  // załączyć zieloną diodę, podczas gdy pozostałe mają być wyłączone
    delay(200);
  }
  else if(pos < 180){
  // 5* Uzupełnić
  // załączyć zieloną i żółtą diodę, podczas gdy czerwona dioda ma pozostać wyłączona
   delay(200);
  }
  // 6* Uzupełnić
  // warunek sprawdzający czy pozycja wynosi 180 stopni, wszystkie diody mają być w stanie wysokim, a opóźnienie może wynosić 1s
