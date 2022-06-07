#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_08() 
{
    float celsius = 0.0;
    
    printf("Conversor unidades de temperatura:");    
    
    printf("\nIngrese la temperatura en Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = ((1.8 * celsius) + 32.0);

    printf("\nTemperatura: %.2fºF", fahrenheit);
    printf("\n");    
}
