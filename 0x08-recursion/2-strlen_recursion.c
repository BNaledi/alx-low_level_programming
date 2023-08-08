#include "main.h"

/**
 * _strlen_recursion - Prototype dunction
 *
 * Function that returns the length of a string.
 *
 * @s: input, the string to be measured.
 *
 * Return: the length of string, s.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
