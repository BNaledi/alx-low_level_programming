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
 * Return value: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int x = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for ( ; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
