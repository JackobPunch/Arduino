// Zadanie 2
// Zadania 2-3 będą rozbudowywać zadanie 1 o coraz to nowsze funkcjonalności
// Pierwszą z nich będzie wprowadzenie przycisków.
// Wciśnięcie 1 przycisku ma zaświecić diodą czerwoną i utrzymać świecenie do momentu puszczenia prczycisku
// Wciśnięcie 2 przycisku ma spowodować miganie diody zielonejz przerwą 1 sekundy do momentu puszczenia przycisku
// Wciśnięcie 3 przycisku a następnie 1 powinno zaświecić diodą zółtą i tylko nią


#define red_diode 13
#define green_diode 12
#define yellow_diode 11

#define first_button 7
#define second_button 6
#define third_button 5


void setup() {
  pinMode(red_diode, OUTPUT);
  pinMode(green_diode, OUTPUT);
  pinMode(yellow_diode, OUTPUT);

  // Startowe ustawienie stanu niskiego na pinach, aby
  // upewnić się, że będą wyłączone
  digitalWrite(red_diode, LOW); 
  digitalWrite(green_diode, LOW);
  digitalWrite(yellow_diode, LOW);

  // Ustawienie przycisku
  pinMode(first_button, INPUT_PULLUP);
  pinMode(second_button, INPUT_PULLUP);
  pinMode(third_button, INPUT_PULLUP);
}

void loop() {
  // Funkcja "digitalRead(pin)" zwraca wartość HIGH lub LOW w zależności od stanu
  // W tym układzie przycisk w momencie wciśnięcia zwiera wejście
  // arduino z masą(LOW).
  
  // Kod dla diody czerwonej
  if(digitalRead(first_button) == LOW and digitalRead(third_button) == HIGH ){
    digitalWrite(red_diode, HIGH);
  }else{
    digitalWrite(red_diode, LOW);
  }

  // Kod dla diody zielonej
  while(digitalRead(second_button) == LOW and digitalRead(third_button) == HIGH ){
    digitalWrite(green_diode, HIGH);
    delay(1000);
    digitalWrite(green_diode, LOW);
    delay(1000);
  }

  // Kod dla diody żółtej
  if(digitalRead(third_button) == LOW and digitalRead(first_button) == LOW){
    digitalWrite(yellow_diode, HIGH);
  }else{
    digitalWrite(yellow_diode, LOW);
  }
  }
