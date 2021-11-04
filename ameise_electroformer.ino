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

const int I_PWN_PIN = 1; //this pin connects to the converter module ZDAUTO and from there to the MUNK analog inlet
const int U_PWN_PIN = 2; //this pin connects to the converter module ZDAUTO and from there to the MUNK analog inlet

void setup() {
  
  pinMode (I_PWM_PIN, output);
  pinMode (U_PWM_PIN, output);
  

}

void loop() {
  // put your main code here, to run repeatedly:

}Doc
