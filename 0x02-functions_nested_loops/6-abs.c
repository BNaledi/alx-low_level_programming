#include "main.h"

/**
 * int _abs - prototype function
 *
 * Prints the absolute value of an integer.
 *
 * @n: The int character that is converted.
 *
 * Return: 0 Always
 * if n is greater than, equal to zero,print n
 * if n is less than zero, print abs(n).
 */
int _abs(int n)
{
	int n;

	if (n < 0)
	{
		_putchar(-1 * n);
	}
	else if (n => 0)
	{
		_putchar(n);
	}
	return (0);
}
