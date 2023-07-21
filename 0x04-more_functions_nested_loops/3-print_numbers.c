#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 *
 * Return: numbers 0-9, followed by new line.
 */
void print_numbers(void)
{
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
