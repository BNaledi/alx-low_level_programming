#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - protoype function.
 *
 * Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: the string to which we are copying.
 * @src: the string from which we are copying.
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	for ( ; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len++] = '\0';
	return (dest);
}
