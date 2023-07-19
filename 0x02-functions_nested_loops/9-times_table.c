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
	int count = 0;

	while (count < 10)
	{
		int a = 9;

		_putchar('0' + (a * count));
	}
	_putchar('\n');
	count++;
}
