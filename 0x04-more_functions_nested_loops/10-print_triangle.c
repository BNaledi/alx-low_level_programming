#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: the integer size of the square  triangle.
 * Return: Empty.
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				putchar(32);
			}
			for (c = 0; c <= a; c++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
