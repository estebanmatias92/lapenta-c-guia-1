#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_09() 
{
    size_t length = 18;

    for (size_t i = 0; i < length+2; i++)
        printf("*");

    printf("\n*");
    for (size_t i = 0; i < length; i++)
        printf(" ");

    printf("*\n*");

    for (size_t i = 0; i < length; i++)
        printf(" ");
    
    printf("*\n*");
 
    for (size_t i = 0; i < length; i++)
        printf(" ");
    
    printf("*\n");

    for (size_t i = 0; i < length+2; i++)
        printf("*"); 
}
