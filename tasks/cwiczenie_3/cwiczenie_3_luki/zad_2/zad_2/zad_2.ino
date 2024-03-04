/*
 * Zadanie 2
 * Celem tego zadania jest zlikwidowanie obrotów przy wartości zero. Aby to zrobić rozszerzymy model z zadnia pierwszego o przekaźnik. 
 * Celem zadania jest podłączenie oraz napisanie kodu sterującego przekaźnikiem w taki sposób aby uniknąć niechcianych przez nas obrotów.
 */
*/

// 1* Uzupełnić
// definicje pinu wentylatora i potencjometru analogowego odpowiednio do przedstawionego schematu połączeń

void setup() {
Serial.begin(9600);
// 2* Uzupełnić
// funkcja ustawiającą wcześniej zdefiniowany pin wentylatora jako wyjście

}

void loop() {
// 3* Uzupełnić
// Odczytywanie wartości z pinu analogowego do zmiennej val typu całkowitego


// Skalowanie odczytanej wartości pomiędzy 0-255, celowo z pominięciem funkcji map()
int fan_speed = val * (255 / 1023.0);
// 4*Uzupełnić
//Instrukcja dla przekaźnika

analogWrite(FAN_PIN,fan_speed);
Serial.print("Speed: ");
// 5* Uzupełnić
// Wyświetlanie ustawionej wartości prędkości wiatraka w konsoli

//Warto użyć funkcji delay() z małą wartością, aby zapewnić stabilność
delay(30);
}
