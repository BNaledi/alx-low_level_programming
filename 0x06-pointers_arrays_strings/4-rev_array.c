#include "main.h"

/**
 * reverse_array - prototype function
 *
 * Function that reverses the content of an array of integers.
 *
 * @a: input value, array name
 * @n: input value, number of array elements
 *
 * Return: reversed array a/ void
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
