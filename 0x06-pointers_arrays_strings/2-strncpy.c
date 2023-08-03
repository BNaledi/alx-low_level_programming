#include "main.h"
#include <string.h>

/**
 * *_strncpy - prototype function
 *
 * Function that copies a string.
 *
 * @dest: input value: string 1
 * @src: input value: string 2
 * @n:input value: length of *src
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
/*
 * At NULL or end of dest, begin src string while src len is n or less)
 */
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
 * Dereferencing dest to NULL at end, i.e. making end of string a variable
 * dest = dest - len to return to dest[0] for printing to start at front
 */
