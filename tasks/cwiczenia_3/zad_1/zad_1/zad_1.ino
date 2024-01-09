/*
 * Zadanie 1
 * Celem tego zadania jest wstępne zapoznanie się z nowym elementem elektronicznym jakim jest wiatrak. W elektronice występują różne warianty różniące się liczbą wyjść. W zależność od potrzeb
 * stosuje się wiatraki z 2/3/4 wyjściami. Należy podpiąć wiatrak do płytki, zdefiniować go jako wyjście, podłączyć potencjometr i napisać program, który będzie sterował prędkością obrotów
 * wiatrka w zależności ustawienia potencjometru.
 */
#define FAN_PIN 9
#define ANALOG_PIN A0
void setup() {
 Serial.begin(9600);
 // Definiujemy wiatrak jako wyjście
 pinMode(FAN_PIN, OUTPUT); 
}

void loop() {
 // Odczytywanie wartości z pinu analogowego 
 int val = analogRead(ANALOG_PIN); 
 //Oczywiście można użyć tutaj funkcji map()
 //Kod został tak zapisany, aby zaprezentować inne opcje
 //Wartość skalowana jest pomiędzy wartości 0-255
 int fan_speed = val * (255 / 1023.0); 
 
 Serial.print("Speed: ");
 Serial.println(fan_speed);
 
 //Warto użyć funkcji delay() z małą wartością, aby zapewnić stabilność
 delay(30); 
}
