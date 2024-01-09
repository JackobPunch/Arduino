/*
 * Zadanie 2
 * Celem tego zadania jest zlikwidowanie obrotów przy wartości zero. Aby to zrobić rozszerzymy model z zadnia pierwszego o przekażnik. 
 * Celem zadaania jest podłączzenie oraz napisanie kodu sterującego przekaźnikiem w taki sposób aby uniknąć niechcianych przez nas obrotów.
 */
#define P_PIN 8
#define FAN_PIN 9
#define ANALOG_PIN A0
void setup() {
 Serial.begin(9600);
 pinMode(FAN_PIN, OUTPUT); 
 //Definiujemy przekaźnik jako wyjście
 pinMode(P_PIN, OUTPUT); 
}

void loop() {

 int val = analogRead(ANALOG_PIN); 

 int fan_speed = val * (255 / 1023.0); 

 //Instrukcja dla przekaźnika
 if(fan_speed>65){
  digitalWrite(P_PIN, LOW);
 }else{
  digitalWrite(P_PIN, HIGH);
 }
 analogWrite(FAN_PIN,fan_speed);
 
 Serial.print("Speed: ");
 Serial.println(fan_speed);
 
 delay(30); 
}
