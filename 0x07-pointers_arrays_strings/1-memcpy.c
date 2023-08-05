#include "main.h"

/**
 * *_memcpy - prototype function.
 *
 * Function that copies memory area.
 * _memcpy() function copies n bytes from memory area src to memory area dest
 *
 * @dest: area where memory is stored.
 * @src: area where memomry are is copied.
 * @n: number/ size of bytes to be copied.
 *
 * Return: A pointer to dest of n bytes worth of- changed/ copied memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
