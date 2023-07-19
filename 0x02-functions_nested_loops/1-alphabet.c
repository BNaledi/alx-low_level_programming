#include "main.h"

/**
 * print_alphabet - prototype function
 *
 *Prints the lowercase alphabet,using only _putchar, twice.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
