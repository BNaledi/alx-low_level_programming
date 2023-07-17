#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase,except q and e, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
