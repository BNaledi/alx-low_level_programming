#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - Prototype function.
 *
 * Function that returns the natural square root of a number.
 * If n does not have a natural square root, the function should return -1.
 *
 * @n: input, number to be square rooted.
 *
 * Return: result of square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - secondary function
 *
 * Recurses to find the natural square root of a number
 *
 * @n:input, number to be square rooted.
 * @i: iterator
 *
 * Return: result of square root of n.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
