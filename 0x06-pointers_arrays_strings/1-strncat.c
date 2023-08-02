#include "main.h"
#include <string.h>

/**
 * *_strncat - prototype function
 *
 * Function that concatenates two strings.
 *
 * @dest: string 1
 * @src: string 2
 * @n: length of *src
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
/*
 * At NULL or end of dest, begin src string while src len is n or less)
 */
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
 * Dereferencing dest to NULL at end, i.e. making end of string a variable
 * dest = dest - len to return to dest[0] for printing to start at front
 */
