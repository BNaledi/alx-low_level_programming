#include "main.h"

/**
 * jack_bauer - prototype function.
 *
 * Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: time showing int change in minutes.
 */
void jack_bauer(void)
{
	int t_h;
	int t_m;

	for (t_h = 0; t_h <= 23; t_h++)
	{
		for (t_m = 0; t_m <= 59; t_m++)
		{
			_putchar('0' + (t_h / 10));
			_putchar('0' + (t_h % 10));
			_putchar(58);
			_putchar('0' + (t_m / 10));
			_putchar('0' + (t_m % 10));
			_putchar('\n');
		}
	}
}
