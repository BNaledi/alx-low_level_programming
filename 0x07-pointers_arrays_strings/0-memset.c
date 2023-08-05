#include "main.h"

/**
 * *_memset - prototype function.
 *
 * Function that fills memory with a constant byte.
 * it fills the first n bytes of the memory area pointed to
 * by s with the constant byte b.
 *
 * @s: input, pointer to memory area starting address.
 * @b: input, constant bite ussed as filler desired value.
 * @n: number/ size of bytes to be filled or changed.
 *
 * Return: A pointer to the memory area s of changed array with new
 * value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
