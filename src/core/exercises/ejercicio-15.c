#include <stdio.h>
#include <math.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_15() 
{
    int X1 = 0;
    int Y1 = 0;
    int X2 = 0;
    int Y2 = 0;
    int X3 = 0;
    int Y3 = 0;
    float area = 0;

    printf("Coordenadas de Triángulo en eje Cartesiano");
    printf("\nIngrese P1(X1, Y1): ");
    scanf("%d %d", &X1, &Y1);
    printf("\nIngrese P2(X2, Y2): ");
    scanf("%d %d", &X2, &Y2);
    printf("\nIngrese P3(X3, Y3): ");
    scanf("%d %d", &X3, &Y3);

    printf("\nCoordenadas P1(X1, Y1) = P1(%d, %d)", X1, Y1);
    printf("\nCoordenadas P1(X2, Y2) = P2(%d, %d)", X2, Y2);
    printf("\nCoordenadas P1(X3, Y3) = P3(%d, %d)", X3, Y3);

    // Mix Integers and floats in the operation an save the result as float,
    // Get the absolute value
    area = fabs((0.5) * ((X1 * (Y2 - Y3)) + (X2 * (Y3 - Y1)) + (X3 * (Y1 - Y2))));
    
    printf("\nArea Triángulo: %.1f", area);
    printf("\n");
}
