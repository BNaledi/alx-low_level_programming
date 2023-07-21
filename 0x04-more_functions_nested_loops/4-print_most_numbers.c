#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9.
 *
 * Return: prints numbers 0 - 9, except 2 and 4.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
		if (c != 50 && c != 52)
		{
			putchar(c);
		}
	}
	putchar('\n');
}
