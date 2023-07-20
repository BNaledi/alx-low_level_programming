#include "main.h"
#include <stdio.h>

/**
 * Print_to_98 - prototype function.
 * 
 * Prints all natural numbers from n to 98, followed by a new line.
 *
 * Numbers must be separated by a comma, followed by a space.
 * Numbers should be printed in order.
 * @n: The first printed number passed to your function.
 * The last printed number should be 98.
 * Return: nine times tsbles.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
