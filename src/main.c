#include <stdio.h>
#include <string.h> // For strcmp()
#include <stdlib.h> // For system()

// Custom libraries
#include "../include/core/exercises/ejercicios.h"
#include "../include/core/menu/menu.h"
#include "../include/arrays/arrays.h"

int main(void) 
{
    // List of drills
    char *exercises[17] = {"01", "02A", "02B", "03", "04", "05", "06", "07", "08","09", "10", "11", "12", "13", "14", "15"};
    char option[5];

    // Show the menu while the options are inside the array
    do
    {
        printf("\n\n\n");      
        
        // Displaying the options
        show_menu(exercises);

        // Asking for the input
        printf("Ingrese codigo (sin parentesis): ");
        fflush(stdin);
        scanf("%s", option);

        // Clean the console after choosing the exercise
        system("clear");

        // Redundant, but necessary to print the title right here, and not write it to each exercise file
        if (array_search(exercises, option) == -1)
        {
            // Freeing the allocated memory of this string
            memset(option, 0, sizeof(option));
            break;
        }        
        
        // Exercise title
        printf("\nEjercicio %s: ", option);
        printf("\n----------------\n\n");

        // If the option matches the number from an excercise, then launch it
        if (strcmp(option, "01") == 0)
        {
            ejercicio_01();
        } 
        else if (strcmp(option, "02A") == 0)
        {
            ejercicio_02A();
        } 
        else if (strcmp(option, "02B") == 0)
        {
            ejercicio_02B();
        } 
        else if (strcmp(option, "03") == 0)
        {
            ejercicio_03();
        } 
        else if (strcmp(option, "04") == 0)
        {
            ejercicio_04();
        } 
        else if (strcmp(option, "05") == 0)
        {
            ejercicio_05();
        } 
        else if (strcmp(option, "06") == 0)
        {
            ejercicio_06();
        } 
        else if (strcmp(option, "07") == 0)
        {
            ejercicio_07();
        }
        else if (strcmp(option, "08") == 0)
        {
            ejercicio_08();
        } 
        else if (strcmp(option, "09") == 0)
        {
            ejercicio_09();
        } 
        else if (strcmp(option, "10") == 0)
        {
            ejercicio_10();
        } 
        else if (strcmp(option, "11") == 0)
        {
            ejercicio_11();
        } 
        else if (strcmp(option, "12") == 0)
        {
            ejercicio_12();
        } 
        else if (strcmp(option, "13") == 0)
        {
            ejercicio_13();
        } 
        else if (strcmp(option, "14") == 0)
        {
            ejercicio_14();
        } 
        else if (strcmp(option, "15") == 0)
        {
            ejercicio_15();
        } 
        else 
        {
            break;
        }        

    } while (array_search(exercises, option) >= 0);
    
    // Closing the program and the prompt
    system("exit");

    return 0;
}