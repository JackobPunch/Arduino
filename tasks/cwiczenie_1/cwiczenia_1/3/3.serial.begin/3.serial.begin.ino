// Zadanie 3
// W tym zadaniu zostanie wprowadzony interfejs szeregowy UART. W skrócie pozwala on na komunikacje arduino z komputerem
// Zadanie będzie polegało na rozbudowaniu poprzedniego o wyświetalnie różnych komunikatów w zależności od wciśniętego przycisku.
// Program powinien:
// Przywitać się jednokrotnie zdaniem "Witam użytkowniku"
// Storzyć zmienną globalną typu string o nazwie "color", która przechowuje nazwe koloru ostanio włączonej diody
// Zmienna color startowo powinna zawierać wartość "Pusto"
// Zawartość zmiennej powina zostać wypisana przy każdym włączeniu diody
// W zadaniu należy użyć tylko jednej zmiennej

#define red_diode 13
#define green_diode 12
#define yellow_diode 11

#define first_button 7
#define second_button 6
#define third_button 5

//Tutaj definiuje się zmienne globalne
String color = "Pusto";


void setup() {
  pinMode(red_diode, OUTPUT);
  pinMode(green_diode, OUTPUT);
  pinMode(yellow_diode, OUTPUT);

  digitalWrite(red_diode, LOW); 
  digitalWrite(green_diode, LOW);
  digitalWrite(yellow_diode, LOW);

  pinMode(first_button, INPUT_PULLUP);
  pinMode(second_button, INPUT_PULLUP);
  pinMode(third_button, INPUT_PULLUP);

  //Uruchamiamy transmisję pomiędzy komputerem i arduino
  Serial.begin(9600); 
  // Witamy się z użytkownikiem
  Serial.println("Witam użytkowniku");
}

void loop() {


  
  // Kod dla diody czerwonej
  if(digitalRead(first_button) == LOW and digitalRead(third_button) == HIGH ){
    digitalWrite(red_diode, HIGH);
    color = "Red";
    Serial.println(color);
  }else{
    digitalWrite(red_diode, LOW);
  }

  // Kod dla diody zielonej
  while(digitalRead(second_button) == LOW and digitalRead(third_button) == HIGH ){
    color = "Green";
    Serial.println(color);
    digitalWrite(green_diode, HIGH);
    delay(1000);
    digitalWrite(green_diode, LOW);
    delay(1000);
  }

  // Kod dla diody żółtej
  if(digitalRead(third_button) == LOW and digitalRead(first_button) == LOW and digitalRead(second_button) == HIGH){
    color = "Yellow";
    Serial.println(color);
    digitalWrite(yellow_diode, HIGH);
  }else{
    digitalWrite(yellow_diode, LOW);
  }
  
  //Zadanie dodatkowe
  while(digitalRead(third_button) == LOW and digitalRead(first_button) == LOW and digitalRead(second_button) == LOW){
    Serial.println("Nie wciskaj wszystkich przycisków jednocześnie!");
    delay(5000);
  }
  }
