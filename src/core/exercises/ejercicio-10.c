#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_10() 
{

    int size = 5;
    char *input;

    do
    {   
        free(input);
        input = malloc((size * sizeof(char))+1);
        printf("Ingrese una palabra de 5 letras: ");
        scanf("%s", input);
        printf("\n");
    } while (strlen(input) != size);

    printf("\n******************");
    printf("\n*                *");
    printf("\n*      %s     *", input);
    printf("\n*                *");
    printf("\n******************");
    printf("\n");
    free(input);
}
