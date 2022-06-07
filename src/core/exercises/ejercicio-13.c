#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_13() 
{
    char repeat;
    int X;
    int Y;
    int cociente;
    int resto;
    
    do
    {
        X = 0; 
        Y = 0; 
        cociente = 0; 
        resto = 0;

        printf("Ingrese un numero (dividendo): ");
        scanf("%d", &X);

        printf("\nIngrese un numero (divisor): ");
        scanf("%d", &Y);

        cociente = X / Y;
        printf("\nX / Y = %d", cociente);

        resto = X % Y;
        printf("\nX % Y = %d", resto);

        printf("\n\nDesea continuar: ");
        scanf(" %c", &repeat); // The whitespace It is a hack to prevent the formatter from evading user input
    } while (repeat == 'y' || repeat == 'Y');
    
    printf("\n");
}
