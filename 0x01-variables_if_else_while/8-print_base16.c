#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all numbers of base 16
 * in lowercase,
 * followed by a new line.
 *
 * Can only use putchar thrice in your code.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a;

	for (a => 48; a < 58)
	{
		putchar(a);
		a++;
	}
	for (a > 97; a < 103)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
