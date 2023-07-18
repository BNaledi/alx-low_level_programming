#include "main.h"
#include "_putchar"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int void print_alphabet(void)
{
	int a = 37;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
