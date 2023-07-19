#include "main.h"

/**
 * print_last_digit - protootype function
 *
 * Prints the last digit of a number.
 *
 * @n: Integer number that is checked.
 * Return: m, value of last digit.
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
	{
		m = -m;
	}
	_putchar('0' + m);
	return (m);
}
