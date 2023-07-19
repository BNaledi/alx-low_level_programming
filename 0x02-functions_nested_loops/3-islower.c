#include "main.h"

/**
 * _islower - prototype function
 *
 * Checks for lowercase character.
 * Returns 1 if c is lowercase.
 * Return 0 otherwise.
 */
int _islower(int c)
{
    if (c >= 97 && c <= 122) // Check for lowercase (ASCII values 97 to 122)
    {
        return 1; // True, character is lowercase
    }
    else if (c >= 65 && c <= 90) // Check for uppercase (ASCII values 65 to 90)
    {
        return 0; // False, character is uppercase
    }
    _putchar('\n');
    return 0; // False, character is not a letter
}
