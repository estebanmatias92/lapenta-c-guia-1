#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_04() 
{    
    int a = 10, b = 3, c, d, e;
    float x, y;

    x = a / b;
    printf("x: %.2f\n", x);

    c = a < b && 25;
    printf("c: %d\n", c);

    d = a + b++;
    printf("d: %d\n", d);

    e = ++a - b;
    printf("e: %d\n", e);

    y = (float) a / b;
    printf("y: %f\n", y);
}
