#include "mbed.h"
#include "arm_book_lib.h"

// Tomas Ginzburg con padron 107438 y placa N°2985
// Estoy con el plan 2023 
// Este ejemplo es el 1.1 y hace prender el led que simula la alarma si se detecto gas, en este caso con un push button

int main()
{
    /* 
     * Al entrar a DigitalIn me meto a la libreria de mbed
     * Sigo en distintos archivos de libreria de mbed (ST)
     * Hasta llegar a las librerias de ARM
     */
    DigitalIn gasDetector(D2); // Configuro pin D2 como entrada

    DigitalOut alarmLed(LED1); // Configuro Led 1 como salida

    gasDetector.mode(PullDown); // Configuro el detector con pull down

    alarmLed = OFF; // Inicio con el led apagado

    printf("%s\n","Hola soy tomas"); 

    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON; // Si el detector esta en alto enciendo el led
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF; // Si el detector esta en bajo apago el led
        }
    }
}