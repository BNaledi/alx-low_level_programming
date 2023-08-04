#include "main.h"

/**
 * *string_toupper - prototype function
 *
 * Function that changes all lowercase letters
 * of a string to uppercase letters.
 *
 * @a: input value, array name
 *
 * Return: a
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
