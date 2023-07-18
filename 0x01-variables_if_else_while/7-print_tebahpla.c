#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the lowercase alphabet,
 *  in reverse,
 *  followed by a new line.
 *
 * Can only use the putchar function, twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 122;

	while (c >= 97)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
