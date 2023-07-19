#include "main.h"

/**
 * print_sign - prototype function
 *
 * Prints the sign of a number.
 *
 * @n: The int character that is checked.
 *
 * Return: 1 or 0 or -1 and
 * print + or 0 or -
 * if n is greater than, equal to or less than zero, respectively.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
