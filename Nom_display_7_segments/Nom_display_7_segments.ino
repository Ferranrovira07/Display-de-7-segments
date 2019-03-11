/****************************************************************
**
**                    TÍTOL: Display de 8 segments 
**                       Escriure F-E-R-R-A-N
** NOM: Ferran Rovira Francàs                    DATA: 18/02/2019
**
*****************************************************************/
//****************************INCLUDE****************************                                     



//***************************VARIABLES***************************
const int ledA = 5;          // donar nom al pin 5 de l’Arduino
const int ledB = 6;          // donar nom al pin 6 de l’Arduino
const int ledC = 7;          // donar nom al pin 7 de l’Arduino
const int ledD = 8;          // donar nom al pin 8 de l’Arduino
const int ledE = 9;          // donar nom al pin 9 de l’Arduino
const int ledF = 10;         // donar nom al pin 10 de l’Arduino
const int ledG = 11;         // donar nom al pin 11 de l’Arduino
const int ledDOT = 12;       // donar nom al pin 12 de l’Arduino
unsigned long TEMPS = 1000;  // temporitzador 
//****************************SETUP*******************************

void setup() {                     //configurar el final de surtida 
pinMode(ledA, OUTPUT);     // definir el pin 5 com una sortida
pinMode(ledB, OUTPUT);     // definir el pin 6 com una sortida
pinMode(ledC, OUTPUT);     // definir el pin 7 com una sortida
pinMode(ledD, OUTPUT);     // definir el pin 8 com una sortida
pinMode(ledE, OUTPUT);     // definir el pin 9 com una sortida
pinMode(ledF, OUTPUT);     // definir el pin 10 com una sortida
pinMode(ledG, OUTPUT);     // definir el pin 11 com una sortida
pinMode(ledDOT, OUTPUT);     // definir el pin 12 com una sortida
}

//****************************LOOP*******************************
void loop() {                      // indica el bucle del programa 
digitalWrite(ledA, HIGH);    // posar a 5V el pin 5
digitalWrite(ledB, LOW);    // posar a 5V el pin 6
digitalWrite(ledC, HIGH);    // posar a 5V el pin 7
digitalWrite(ledD, LOW);    // posar a 5V el pin 8  //J
digitalWrite(ledE, HIGH);    // posar a 5V el pin 9
digitalWrite(ledF, HIGH);    // posar a 5V el pin 10
digitalWrite(ledG, HIGH);    // posar a 5V el pin 11
digitalWrite(ledDOT, LOW);  // posar a 5V el pin 12
delay(TEMPS);                  
}

//*************************FUNCIONS*****************************  
