/*
 * Zadanie 2
 * Zadanie to wprowadzi nowy element jakim jest ultradźwiękowy czujnik odległości HC-SR04.
 * Zadanie będzie polegać na:
 * - Połączeniu wyświetlacza lcd oraz czujnika do płytki stykowej.
 * - Prezentowanie pomiaru czujnika na wyświetlaczu w formacie:
 *   Distance: [pomiar dystansu w cm]cm
 *   Distance: [pomiar dystancu w calach]inch
 */
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

#define trig_pin 10
#define echo_pin 9

long duration;
int distance_cm, distance_inch;

void setup() {
  lcd.begin(16,2);
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
}
void loop() {
  // Upewniamy się ze stan na trig_pin jest LOW)
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  // Wyzwalanie pomiaru, wysyłanie impulsu prostokątnego
  // o czasie trwania 10 mikrosekund na pin triger_pin
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  // Pobieramy czas trwania impulsu zwrotnego na pinie echo
  // Badamy jak długo trwa stan wysoki tego impulsu
  duration = pulseIn(echo_pin, HIGH);

  // Aby otrzymać wartość w cm należy podzielić wartość duration przez 58
  // W skrócie jest to spowodowane że sygnał leci do przeszkody i spowrotem 
  // a my chcemy otrzymać tylko połowe tego. Dochodzą też inne czynnik przez które
  // to właśnie 58.
  distance_cm= duration/58;

  // Aby otrzymać pomiar w calach należy przemnożyć pomiar w cm * 0.39370
  distance_inch = distance_cm * 0.39370;

  
  lcd.setCursor(0,0); 
  lcd.print("Distance: "); 
  lcd.print(distance_cm); 
  lcd.print(" cm");
  lcd.setCursor(0,1);
  lcd.print("Distance: ");
  lcd.print(distance_inch);
  lcd.print(" inch");
  delay(10);
}
