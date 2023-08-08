#include "main.h"

/**
 * factorial - Prototype function.
 *
 * Function that returns the factorial of a given number.
 * If n is lower than 0, the function should return -1 to indicate an error.
 *
 * @n: number fromwhich to return factorial.
 *
 * Return: Factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
