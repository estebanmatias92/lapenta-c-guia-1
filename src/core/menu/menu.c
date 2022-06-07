#include <stdio.h>
#include <string.h>
#include "../../../include/core/menu/menu.h"

/*
    Printing all the menu options an titles
*/
void show_menu(char **items)
{
    printf("\n============");
    printf("\n    MENU    ");
    printf("\n============\n");

    printf("\nEjercicio:");

    int i = 0;
    while (items[i] != NULL)
    {
        printf(" (%s)", items[i]);
        i++;
    }

    printf("\nExit: (0)\n\n");
}