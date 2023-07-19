#include "main.h"

/**
 * _isalpha - prototype function
 *
 * Checks if the given character is uppercase or not, using ASCII values.
 *
 * @c: The int character that is checked.
 *
 * Return: 1 if c is a letter, lowercas or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{ return (0);
	}
	return (0);
}
