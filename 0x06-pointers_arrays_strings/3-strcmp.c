#include "main.h"

/**
 * _strcmp - prototype function
 *
 * Function that compares two strings.
 *
 * @s1: input value, string 1
 * @s2: input value, string 2
 *
 * Return: comparison s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
