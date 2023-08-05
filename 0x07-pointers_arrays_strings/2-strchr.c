#include "main.h"

/**
 * _strchr - prototype function.
 *
 * Function that gets the length of a prefix substring.
 * Returns a pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found.
 *
 * @s: input, string to be changed.
 * @c: input, char to located.
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
