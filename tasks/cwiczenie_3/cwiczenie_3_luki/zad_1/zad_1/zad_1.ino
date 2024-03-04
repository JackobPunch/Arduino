/*
 * Zadanie 1
 * Celem tego zadania jest zapoznanie Studentów z takim elementem elektronicznym jak wentylator 4-przewodowy. 
 * Należy podpiąć wiatrak do płytki zgodnie z dołączonym do zadania rysunkiem, zdefiniować go jako wyjście, podłączyć potencjometr i napisać program, który będzie sterował prędkością obrotów
 * wiatrka w zależności ustawienia potencjometru.
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
 
 analogWrite(FAN_PIN,fan_speed);
 Serial.print("Speed: ");
 // 4* Uzupełnić
 // Wyświetlanie ustawionej wartości prędkości wiatraka w konsoli
 
 //Warto użyć funkcji delay() z małą wartością, aby zapewnić stabilność
 delay(30); 
}
