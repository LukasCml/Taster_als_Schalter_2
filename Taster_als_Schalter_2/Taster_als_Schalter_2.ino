/*
   Programm:          Taster mit Pulldown schaltet LED ein/aus (Arbeiten mit Bibliotheken)
   Letzte Änderung:   06.10.2020
   Programmierer:     LC
   Bibliotheken:      OneButton
  
   Hardware:      Arduino UNO / LED an Pin 13 / Taster (Schließer) an Pin 8 / Pulldown
*/


#include <OneButton.h>

OneButton taster(8, false);

#define LED 13                            //grüne LED an Pin 13
#define Taster 8                          //Taster an Pin 8

boolean merkerLED = false;

void setup()
{
  pinMode (LED, OUTPUT);                  //LED
  taster.attachClick(Funktion_Taster);    //void Funktion_Taster () wird ausgeführt
}


void loop()
{
    taster.tick();
    delay(10);
    digitalWrite(LED, merkerLED);
}


void Funktion_Taster()
{
  merkerLED = !merkerLED;                 //Signal wird negiert
}
