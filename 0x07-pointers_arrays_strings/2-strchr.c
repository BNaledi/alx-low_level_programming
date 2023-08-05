#include "main.h"

/**
 * *_strchr - prototype function.
 *
 * Function that locates a character in a string.
 * Returns a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found.
 *
 * @s: input, string containing char c.
 * @c: input, char to be locates.
 *
 * Return: Always 0 (Success).
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
