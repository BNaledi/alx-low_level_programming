#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Prototype function.
 *
 * Function that checks whether an integer is a prime number or not.
 * @n: input, integer to be checked if it is a prime number.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - secondary function
 *
 * Recurses to determine whether an integer is a prime number or not.
 *
 * @n:input, number to be evaluated.
 * @i: iterator.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
