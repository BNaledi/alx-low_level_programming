#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 *
 * Return: 10 times the numbers, from 0 to 14.
 */
void more_numbers(void)
{
	int c;
	int b = 0;
	int a;

	while (b < 10)
	{
		b++;
		for (c = 0; c <= 14; c++)
		{
			a = c;

			if (a > 9)
			{
				a = 1;
			}
			putchar('0' + a);
			if (c > 9)
			{
				putchar('0' + c - 10);
			}
		}
		putchar('\n');
	}
}
