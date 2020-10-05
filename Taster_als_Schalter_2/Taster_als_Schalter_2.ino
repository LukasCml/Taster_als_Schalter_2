/*
   Programm:          Taster mit Pulldown schaltet LED ein/aus (Arbeiten mit Bibliotheken)
   Letzte Änderung:   02.10.2020
   Programmierer:     LC

   Hardware:      Arduino UNO / LED an Pin 13 / Taster (Schließer) an Pin 8 / Pulldown
*/


#include <OneButton.h>

OneButton taster(8, true);

#define LED 13         //grüne LED an Pin 13
#define Taster 8     //Taster an Pin 8

boolean statusLED = 0;

void setup()
{
  pinMode (LED, OUTPUT);   //LED
  taster.attachClick(Funktion_Taster);
}


void loop()
{
  taster.tick();
  delay(10);
  /*
    taster.tick();
    delay(10);
    digitalWrite(LED, statusLED);
  */
}


void Funktion_Taster()
{
  /*
     statusLED=!statusLED;
  */
  if (statusLED == 1)
  {
    digitalWrite (LED, LOW);
    statusLED = 0;
  }
  else
  {
    digitalWrite(LED, HIGH);
    statusLED = 1;
  }
}
