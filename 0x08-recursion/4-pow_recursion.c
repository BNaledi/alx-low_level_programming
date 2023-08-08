#include "main.h"

/**
 * _pow_recursion - Prototype function.
 *
 * Function that returns the value of x raised to the power of y.
 * If y is lower than 0, the function should return -1.
 *
 * @x: input, base of number to be raised to some exponent.
 * @y: input, power/ exponent/ index.
 *
 * Return: result of x raised to the power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
