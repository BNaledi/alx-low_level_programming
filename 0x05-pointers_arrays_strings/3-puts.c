#include "main.h"

/**
 * _puts - prototype function
 *
 * Prints a string, followed by a new line, to stdout.
 *
 * @str: the pointer to string characters.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
