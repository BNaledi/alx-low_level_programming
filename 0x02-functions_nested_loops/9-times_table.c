#include "main.h"

/**
 * times_table - prototype function.
 * 
 * Prints the 9 times table, starting with 0.
 *
 * Return: nine times tsbles.
 */
void times_table(void)
{
	int count;
	int a;

	for (count = 0; count <= 10; count++)
	{
		_putchar('0' + (a * count));
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
