#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prototype function
 *
 * Reverse a string.
 *
 * @s: the pointer to string characters.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int lenSwap = 0;

	for (; lenSwap < (len / 2); lenSwap++)
	{
		char temp = s[lenSwap];

		s[lenSwap] = s[len - 1 - lenSwap];
		s[len - 1 - lenSwap] = temp;
	}
}
