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
	int c = 97;

	if ( c =< 122)
	{
		_putchar(c);
		c++;
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
