#include "main.h"

/**
 * swap_int - prototype function
 *
 * Swaps the values of two integers.
 *
 * @a: the first integer to be swapped.
 * @b: the second integer to be swapped.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
		*a = *b;
		*b = c;
}
