


#include <wiringPi.h> // Include WiringPi library!
#include <iostream>
// Pin number declarations. We gebruiken  Broadcom chip pin nummers.

int ledPin = 4; // gewone LED - Broadcom pin 4.



int main(void)
{
    // Setup dingen:
    wiringPiSetupGpio(); // Initialiseer wiringPi -- gebruik Broadcom pin nummers

    pinMode(ledPin, OUTPUT);     // Set gewone LED als output
   



    // Loop (while(1)):
    while(1)
    {
       
         
            digitalWrite(ledPin, HIGH); // Zet LED aan
            std::cout << "on";     
                 delay(500); // Wacht 500ms
            digitalWrite(ledPin, LOW); // Zet LED uit
           std::cout <<"off";
            delay(500); // Wacht 500ms alweer
            
        
}
    return 0;
}
