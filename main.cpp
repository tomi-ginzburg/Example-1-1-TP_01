#include "mbed.h"
#include "arm_book_lib.h"

// Tomas Ginzburg con placa N°2985

int main()
{
    DigitalIn gasDetector(D2); // Configuro pin D2 como entrada

    DigitalOut alarmLed(LED1); // Configuro Led 1 como salida

    gasDetector.mode(PullDown); // Configuro el detector con pull down

    alarmLed = OFF; // Inicio con el led apagado

    printf("%s\n","Hello World");

    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON; // Si el detector esta en alto enciendo el led
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF; // Si el detector esta en bajo apago el led
        }
    }
}