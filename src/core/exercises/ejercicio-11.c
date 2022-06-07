#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_11() 
{
    int input;

    do
    {   
        input = 0;
        printf("Ingrese un numero de 4 digitos: ");
        scanf("%d", &input);
        printf("\n");
    } while (input < 1000 || input > 9999);

    int millar = (input / 1000);
    int centena = (input % 1000) / 100;
    int decena = (input % 100) / 10;
    int unidad = (input % 10);

    printf("%d", millar);
    printf("\n%d", centena);
    printf("\n%d", decena);
    printf("\n%d", unidad);
    printf("\n");

}
