/*
 * Zadanie 2
 * Zadanie to wprowadza kolejny bardzo ważny i przydatny element. Jest to serwomechanizm.
 * Cel zadania to stopniowe poruszanie serwem. Jak wiadomo ten model serwo
 * porusza się w zakresie 0-180 stopni. Program będzie poruszał serwem tak aby co 0.2s kąt zmieniał  sie o 6 stopni.
 * a po osiagnieciu 180 wrócił do pozycji 0.
 * 
 * Po zrealizowaniu tej funkcjonalności należy dodać 3 diody (czerwoną, zółtą, zieloną).
 * Gdy kąt jest w zakresie (0,90) swieci się tylko zielona
 * Gdy kąt jest w zakresie <90,180) swieci się zielona i żółta
 * Gdy kąt osiąga kąt 180 świecą się wszystkie diody i program zatrzymuje się na 2 sekundy.
 */

#include <Servo.h>

#define red_diode 10
#define green_diode 12
#define yellow_diode 11

Servo servo;

int place = 0;
int change = 6; 

void setup() {
    servo.attach(9);
    
    pinMode(red_diode, OUTPUT);
    pinMode(green_diode, OUTPUT);
    pinMode(yellow_diode, OUTPUT);
    
    digitalWrite(red_diode, LOW); 
    digitalWrite(green_diode, LOW);
    digitalWrite(yellow_diode, LOW);  

    Serial.begin(9600);
}

void loop() {
   if (place < 180) { 
    servo.write(place); 
  } 
  else { 
    place = 0;
  }    
  place = place + change; 
  Serial.println(place);
  if(place < 90){
    digitalWrite(red_diode, LOW); 
    digitalWrite(green_diode, HIGH);
    digitalWrite(yellow_diode, LOW); 
    delay(200);
  }
  else if(place < 180){
    digitalWrite(red_diode, LOW); 
    digitalWrite(green_diode, HIGH);
    digitalWrite(yellow_diode, HIGH); 
    delay(200);
  }
  else if (place == 180){
    digitalWrite(red_diode, HIGH); 
    digitalWrite(green_diode, HIGH);
    digitalWrite(yellow_diode, HIGH); 
    delay(1000);
  }

}
