#include <stdio.h>
#include <string.h>


#define NOT_FOUND (-1) // "Macroing"

/*
    Search for a string inside an array of string
*/
int array_search(char **array, char *item)
{
    int result = NOT_FOUND;
    int i = 0;

    // Keep looping and just stop if it is the end of the array or the item was found
    while (array[i] != NULL && result == NOT_FOUND)
    {
        if (strcmp(array[i], item) == 0)
        {
            result = i;
        }

        i++;
    }
    
    // Return the index or an invalid integer
    return result;
}