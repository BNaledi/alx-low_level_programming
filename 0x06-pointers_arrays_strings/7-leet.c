#include "main.h"

/**
 * *leet - prototype function.
 *
 * Function that encodes a string into 1337 'speak'.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 *
 * @g: input value, a string
 *
 * Return: g, ecoded/ changed string.
 */
char *leet(char *g)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; g[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (g[i] == s1[j])
			{
				g[i] = s2[j];
			}
		}
	}
	return (g);
}
