#include "main.h"

/**
 * print_alphabet_x10 - prototype function
 *
 *Prints the lowercase alphabet,using only _putchar, twice.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		int a = 97;

		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		count++;
	}
}
