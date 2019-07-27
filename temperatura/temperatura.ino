#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h> //Dołączenie bilbioteki
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); //Informacja o podłączeniu nowego wyświetlacza
OneWire oneWire(A5); //Podłączenie do A5
DallasTemperature sensors(&oneWire); //Przekazania informacji do biblioteki
 
void setup(void) {
  Serial.begin(9600);
  sensors.begin(); //Inicjalizacja czujnikow
  lcd.begin(16, 2); //Deklaracja typu
  lcd.setCursor(0, 0); //Ustawienie kursora
  lcd.print(" Aktualna temp."); //Wyświetlenie tekstu
}
 
void loop(void) { 
  sensors.requestTemperatures(); //Pobranie temperatury czujnika
  Serial.print("Aktualna temperatura: ");
  Serial.println(sensors.getTempCByIndex(0));//Wyswietlenie informacji
  lcd.setCursor(0, 1); //Ustawienie kursora
  lcd.print("     ");
  lcd.print(sensors.getTempCByIndex(0)); //Wyświetlenie tekstu
  delay(500);
}
