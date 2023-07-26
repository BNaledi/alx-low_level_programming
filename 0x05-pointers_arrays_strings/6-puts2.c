#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prototype function
 *
 * prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *
 * @str: the pointer to string characters.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
