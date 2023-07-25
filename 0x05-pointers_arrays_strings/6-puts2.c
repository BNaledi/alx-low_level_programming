#include "main.h"
#include <string.h>

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

	for ( len = 0; len % 2 != 0; len++)
	{
		while (*str != '\0')
		{
		_putchar(*str);
		str++;
		}
		_putchar('\n');
	}
}
