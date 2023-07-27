#include "main.h"

/**
 * *_strcat - prototype function
 *
 * Function that concatenates two strings.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src);
{
	int len;
	int i;

	for (len = 0; *dest != '\0'; len++)
	{
		*dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		_putchar(src[]);
		*dest++;
		*src++;
	}
	_putchar('\n');
}
