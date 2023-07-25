#include "main.h"

/**
 * rev_string - prototype function
 *
 * Reverse a string.
 *
 * @s: the pointer to string characters.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0;
	int swap;

	for (swap = len; swap > 0; swap--)
        {
                _putchar(*s);
                s--;
        }
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	_putchar('\n');
}
