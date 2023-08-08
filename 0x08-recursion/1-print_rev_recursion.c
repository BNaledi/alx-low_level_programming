#include "main.h"

/**
 * _print_rev_recursion - Prototype dunction
 *
 * Function that prints a string in reverse.
 *
 * @s: input, the string to be printed.
 *
 * Return: the printed string, s.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
