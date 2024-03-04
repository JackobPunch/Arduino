/* Zadanie 1b
 * Zadanie to będzie zmodyfikowaną wersją zadania 1. Celem zadania jest wyświetlanie w petli, informacji o obecnej wartości sygnału PWM i prędkości obrotowej wentylatora. Inforacje maja się
 * wyświetlać w formacie: "PWM = {0, 20, 40, 60, 80, 100}%, Speed = xxx rpm". */

#define PIN 2
 // 1* Uzupełnić 
 //  definicje pinu nr 9 jako wentylatora (proponowana nazwa to FAN_PIN)

int count = 0;
unsigned long start_time;
 // 2* Uzupełnić 
 //  deklaracja zmiennej typu całkowitego przechowującej informacje o obrotach

void setup() {
  pinMode(FAN_PIN, OUTPUT);
  analogWrite(FAN_PIN, 0);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(PIN), counter, RISING); // Kabel żółty
}

void loop() {
  for(int pwm = 0; pwm <= 255; pwm += 51){
  // 3* Uzupełnić 
  // ustawić wartość analogową zadanej prędkości obrotowej zmienną pwm
    
    delay(3000);
    start_time = millis();
    count = 0;
    while((millis() - start_time) < 1000){
    }
    rpm = count * 30;  //60/2
    Serial.print("PWM = ");
    Serial.print(map(pwm, 0, 255, 0, 100));
    Serial.print(" %");
    Serial.print(",  Speed = ");
  // 4* Uzupełnić
  // Wyświetlanie ustawionej wartości prędkości wiatraka w konsoli
    Serial.println(" rpm");
    delay(2000); 
  }
}

void counter() {
 // 5* Uzupełnić
 // zinkrementować zmienną count
}
/*  Uwaga: Z uwagi na swoją budowę wentylatory pomimo przypisania wartości 0 do zmiennej pwm, nadal będą pracować. 
 *  W celu całkowitego ich wyłączenia należałoby dokonać rozłączenia ich zasilania na przykład za pomocą przekaźnika. */
