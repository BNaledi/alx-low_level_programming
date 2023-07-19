#include "main.h"

/**
 * _islower - prototype function
 *
 * Checks if the given character is lowercase or not, using ASCII values.
 *
 * @c is The character that is checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
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
