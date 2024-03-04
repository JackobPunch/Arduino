/*
 * Zadanie 2
 * Zadanie to wprowadzi nowy element jakim jest ultradźwiękowy czujnik odległości HC-SR04.
 * Zadanie będzie polegać na:
 * - Połączeniu wyświetlacza lcd oraz czujnika do płytki stykowej.
 * - Prezentowanie pomiaru czujnika na wyświetlaczu w formacie:
 *   Distance: [pomiar dystansu w cm]cm
 *   Distance: [pomiar dystancu w calach]inch
 */

// Aliasy odpowiedzialne za pin TRIG i ECHO
#define trig_pin 10
#define echo_pin 9

// Zmienne przechowujące czas oraz pomiary w cm i calach.
long duration;
int distance_cm, distance_inch;

void setup() {
  
  // Definicja typu pinów trig_pin i echo_pin
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
}
void loop() {
  // Upewniamy się ze stan na trig_pin jest LOW)
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  
  // Wyzwalanie pomiaru, wysyłanie impulsu prostokątnego
  // o czasie trwania 10 mikrosekund na pin triger_pin:
 

  // Pobieramy czas trwania impulsu zwrotnego na pinie echo
  // Badamy jak długo trwa stan wysoki tego impulsu:
  
  //duration = ...

  // Aby otrzymać wartość w cm należy podzielić wartość duration przez 58
  // W skrócie jest to spowodowane że sygnał leci do przeszkody i spowrotem 
  // a my chcemy otrzymać tylko połowe tego. Dochodzą też inne czynnik przez które
  // to właśnie 58:
  

  // Aby otrzymać pomiar w calach należy przemnożyć pomiar w cm * 0.39370:
  
  //Kod odpowiedzialny za wyświetlanie danych:
  

}
