#include "main.h"

/**
 * _islower - prototype function
 *
 * _islower function checks whether 
 * int c is lowercase character using ASCII values/.
 *
 * Returns 1 if c is lowercase.
 * Return 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (0);
	}
	return (0);
}
