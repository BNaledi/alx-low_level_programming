#include "main.h"
#include <stdio.h>

/**
 * print_array - prototype function
 *
 * Prints n elements of an array of integers, followed by a new line.
 *
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the
 * same order as they are stored in the array.
 * @a: the Array name.
 * @n: the number of elements of the array to be printed.
 *
 * Return: a and n array input/ comination.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1) ; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d ", a[n - 1]);
	}
	printf("\n");
}
