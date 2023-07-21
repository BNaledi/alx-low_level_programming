#include "main.h"

/**
 * _isdigit - check if a character is a digit.
 *
 * @c: The integer that is checked.
 * Return: 1 if c is a digit or 0 otherwise.
 */
int _isdigit(int c)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
	}
	return (0);
}
