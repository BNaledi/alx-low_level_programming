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
	if (c > 96 && c <= 122)
	{
		c++;
		return (1);
		_putchar('\n');
	}
	else if (c > 64 && c <= 90)
	{
		c++;
		return (0);
		_putchar('\n');
	}
	return (0);
}
