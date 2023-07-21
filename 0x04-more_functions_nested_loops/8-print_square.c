#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 *
 * @size: the number of squares.
 * Return: Empty.
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
