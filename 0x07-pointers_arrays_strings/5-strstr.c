#include "main.h"

/**
 * *_strstr - prototype function.
 *
 * Function that locates a substring.
 * Finds the first occurrence of the substring needle in the string
 * haystack. The terminating null bytes (\0) are not compared.
 *
 * @needle: input, string being looked for.
 * @haystack: input, string being searched.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
