/*
 * Zadanie 1b
 * Zadanie to będzie zmodyfikowaną wersją zadania 1. Celem zadania wyświetlanie w petli informacji o obecnej wartości sygnału pwm i szybkosci wiatraka. Inforacje maja się
 * wyświetlać w formacie: "PWM = {0, 20, 40, 60, 80, 100}%, Speed = xxx rpm".
 */
#define FAN_PIN 9
#define PIN 2


int count = 0;
unsigned long start_time;
int rpm;

void setup() {
  pinMode(FAN_PIN, OUTPUT);
  analogWrite(FAN_PIN, 0);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(PIN), counter, RISING); // Kabel zolty z 5V
}

void loop() {
  for(int pwm = 0; pwm <= 255; pwm += 51){
    analogWrite(FAN_PIN, pwm);
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
    Serial.print(rpm);
    Serial.println(" rpm");
    delay(2000);
    
  }

}

void counter() {
  count++;
}

/* 
 *  Uwaga:
 *  - Wiatraki CPU posiadają minimalną prędkość, aby ochronić elektronikę przed przegrzaniem.
 *    Dlatego wartość pwm = 0 nadal będzie skutkować jakimiś rotacjami.
 */
