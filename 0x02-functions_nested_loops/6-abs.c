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
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	n = -n;
	return (n);
}
