#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prototype function
 *
 * prints half of a string, followed by a new line.
 * The function should print the second half of the string.
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: the pointer to string characters.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1) / 2;
	int i;

	for (i = n + 1; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
