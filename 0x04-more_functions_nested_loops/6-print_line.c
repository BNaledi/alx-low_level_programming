#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: is the number of times the _ character is printed.
 *
 * Return: a line of length n times _ character.
*/
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
