#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_12() 
{
    int multiplicando;
    int multiplicador;

    do
    {   
        multiplicando = 0;
        printf("Ingrese un numero de 3 digitos: ");
        scanf("%d", &multiplicando);
        printf("\n");
    } while (multiplicando < 100 || multiplicando > 999);

    do
    {   
        multiplicador = 0;
        printf("Ingrese otro numero de 3 digitos: ");
        scanf("%d", &multiplicador);
        printf("\n");
    } while (multiplicador < 100 || multiplicador > 999);

    int centena_multiplicador = multiplicador / 100;
    int decena_multiplicador = (multiplicador % 100) /10;
    int unidad_multiplicador = multiplicador % 10;

    int producto1 = multiplicando * unidad_multiplicador;
    int producto2 = multiplicando * decena_multiplicador;
    int producto3 = multiplicando * centena_multiplicador;
    int producto_final = multiplicando * multiplicador;

    printf("    %d", multiplicando);
    printf("\n x  %d", multiplicador);
    printf("\n--------");
    printf("\n   %d", producto1);
    printf("\n   %d", producto2);
    printf("\n %d", producto3);
    printf("\n--------");
    printf("\n %d", producto_final);
    printf("\n");
}
