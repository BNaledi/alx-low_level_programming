#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: is the number of times the / character is printed.
 *
 * Return: a line of length n times the / character.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
