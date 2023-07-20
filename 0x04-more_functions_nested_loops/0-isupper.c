#include "main.h"

/**
 * _isupper - prototype function.
 *
 * Checks for uppercase character.
 *
 * @c: The character that needs to be checked.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
	}
	return (0);
}
