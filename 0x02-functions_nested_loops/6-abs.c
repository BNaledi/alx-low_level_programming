#include "main.h"

/**
 * _abs - prototype function
 *
 * Prints the absolute value of an integer.
 *
 * @n: The int character that is converted.
 *
 * Return: n if n is greater than, equal to zero,
 * if n is less than zero, print abs(n).
 */
int _abs(int n)
{
	if (n < 0)
	{
		imaxabs(n);
		printf("%jd", n);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else if (n > 0)
	{
		_putchar(n);
	}
	return (0);
}
