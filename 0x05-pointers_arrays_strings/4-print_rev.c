#include "main.h"

/**
 * print_rev - prototype function
 *
 * Prints a string, in reverse, followed by a new line.
 *
 * @s: the pointer to string characters.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0;
	int swap;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for(swap = len; swap > 0; swap--)
		{
			_putchar(*s);
			s--;
		}
	_putchar('\n');
}
