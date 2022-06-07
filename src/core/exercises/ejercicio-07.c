#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_07() 
{
    float foots = 0;

    printf("Conversor unidades de distancia:");
    
    do
    {
        printf("\nIngrese la distancia en Pies: ");
        scanf("%f", &foots);
    } while (foots < 0);

    float inches = foots * 12.0;
    float yards = foots * 3.0;
    float centimeters = inches * 2.54;
    float meters = centimeters / 100;

    printf("\nYardas = %.2f", yards);
    printf("\nPulgadas = %.2f", inches);
    printf("\nCentimetros = %.2f", centimeters);
    printf("\nMetros = %.2f", meters);
    printf("\n");
}
