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
	int c;

	for (;c = 97 ; c =< 122; c++)
	{
		_putchar(c);
		return (1);
	}
	_putchar('\n');
	retun (0);
}
