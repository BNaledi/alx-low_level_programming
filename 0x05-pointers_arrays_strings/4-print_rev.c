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
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
