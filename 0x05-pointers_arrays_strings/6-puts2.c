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
	int i;

	while (*str != '\0')
	{
		for (i = 0; (len % 2) != 0; i++)
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
