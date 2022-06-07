#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_02A() 
{
    printf("Expression \"15*14-3*7\"            : %d\n", (15 * 14 - 3 * 7));
    printf("Expression \"-4*5*2\"               : %d\n", (-4 * 5 * 2));
    printf("Expression \"(24+2*6) / 4\"         : %d\n", ((24 + 2 * 6) / 4));
    printf("Expression \"4*3*5+8*4*2-5\"        : %d\n", (4 * 3 * 5 + 8 * 4 * 2 - 5));
    printf("Expression \"4-40 / 5\"             : %d\n", (4 - 40 / 5));
    printf("Expression \"(-5) % (-2)\"          : %d\n", ((-5) % (-2)));
    printf("Expression \"3+4*(8*(4-(9+3)/6))\"  : %d\n", (3 + 4 * (8 * (4 - (9 + 3) / 6))));
}
