#include "main.h"

/**
 * _strspn - prototype function.
 *
 * Function that gets the length of a prefix substring.
 * Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 *
 * @s: inputcontains initial segment.
 * @accept: input, bytes to be counted.
 *
 * Return: Always 0 (Success).
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
