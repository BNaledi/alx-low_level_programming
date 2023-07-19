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
    if (c >= 97 && c <= 122)
    {
        return 1;
    }
    else if (c >= 65 && c <= 90)
    {
        return 0;
    }
    _putchar('\n');
    return 0;
}
