/* ameise Elektroforming Controller
 *  
 * used to put out 0..10V through PWM and external Converter
 * to control high current plating PSUs
 * here MUNK vari puls 0..160A
 * 
 * It shall ramp up the current according to the master to be plated
 * and shall do some more automation and monitoring tasks...
 * 
 */
#include <Wire.h> // Wire Bibliothek einbinden
#include <LiquidCrystal_I2C.h> // Vorher hinzugefügte LiquidCrystal_I2C Bibliothek einbinden
LiquidCrystal_I2C lcd(0x27, 20, 4); //Hier wird festgelegt um was für einen Display es sich handelt. In diesem Fall eines mit 16 Zeichen in 2 Zeilen und der HEX-Adresse 0x27. Für ein vierzeiliges I2C-LCD verwendet man den Code "LiquidCrystal_I2C lcd(0x27, 20, 4)" 

const int I_PWM_PIN = 1; //this pin connects to the converter module ZDAUTO and from there to the MUNK analog inlet
const int U_PWM_PIN = 2; //this pin connects to the converter module ZDAUTO and from there to the MUNK analog inlet

void setup() {

  lcd.init(); //Im Setup wird der LCD gestartet 
  lcd.backlight(); //Hintergrundbeleuchtung einschalten (lcd.noBacklight(); schaltet die Beleuchtung aus). 
  
  pinMode (I_PWM_PIN, OUTPUT);
  pinMode (U_PWM_PIN, OUTPUT);

  splash_screen();
  
}
void splash_screen(){
  lcd.setCursor(0, 0);//Hier wird die Position des ersten Zeichens festgelegt. In diesem Fall bedeutet (0,0) das erste Zeichen in der ersten Zeile. 
  lcd.print("ameise electroformer"); 
  lcd.setCursor(0, 1);// In diesem Fall bedeutet (0,1) das erste Zeichen in der zweiten Zeile. 
  lcd.print("starting up..."); 
  lcd.setCursor(0, 2);// In diesem Fall bedeutet (0,1) das erste Zeichen in der zweiten Zeile. 
  lcd.print("welcome to"); 
  lcd.setCursor(0, 3);// In diesem Fall bedeutet (0,1) das erste Zeichen in der zweiten Zeile. 
  lcd.print("chemical warfare!"); 

}


void loop() {
  
}
