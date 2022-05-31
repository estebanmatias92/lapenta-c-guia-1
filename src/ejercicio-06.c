#include <stdio.h>
#include "./include/ejercicios.h"

const int one_minute = 60;
const int one_hour = 3600;

void ejercicio_06() {
    int input = 0;
    int seconds = 0;
    int minutes = 0;
    int hours = 0;

    printf("Conversor de tiempo: \n");

    do
    {
        printf("Ingrese la cantidad de segundos: ");
        scanf("%d", &input);
    } while (input < 0);

    hours = (input / one_hour);
    minutes = ((input % one_hour) / one_minute);
    seconds = ((input % one_hour) - (minutes * one_minute));
    
    printf("\nH: %d   M: %d   S: %d\n", hours, minutes, seconds);
}
