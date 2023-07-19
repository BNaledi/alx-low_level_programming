#include "main.h"

/**
 * print_alphabet
 *
 *Write a function that prints the alphabet,
 in lowercase, followed by a new line.
 May only use _putchar, twice.
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
