#include "main.h"

/**
 * print_to_98 - prototype function.
 *
 * Prints all natural numbers from n to 98, followed by a new line.
 *
 * Numbers must be separated by a comma, followed by a space.
 * Numbers should be printed in order.
 * @n: The first printed number passed to your function.
 * The last printed number should be 98.
 * Return: nine times tsbles.
 */
void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
		_putchar(',');
		_putchar(' ');
	}
	_putchar(57);
	_putchar(56);
	_putchar('\n');
}
