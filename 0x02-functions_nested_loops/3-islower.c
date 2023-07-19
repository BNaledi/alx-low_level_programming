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
	int a = 97;

	if ( a =< 122)
	{
		_putchar(a);
		a++;
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
