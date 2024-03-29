#include "main.h"

/**
 * _puts_recursion - Prototype function
 *
 * prints a string, followed by a new line.
 *
 * @s: input, string to be printed.
 *
 * Return: printed string.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
