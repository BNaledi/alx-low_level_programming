#include "main.h"

/**
 * _strlen - prototype function
 *
 * Returns the length of a string.
 *
 * @str: the pointer to string characters.
 *
 * Return: Always 0.
 */
int _strlen(char *str)
{
	int len = 0;

	if (*str != '\0')
	{
		len++;
		str++;
	}
	else
	{
		return (len);
	}
	return (len);
}
