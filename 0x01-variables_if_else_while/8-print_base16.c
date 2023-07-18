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
	int a = 30;

	if (a <= 39)
	{
		putchar(a);
		a++;
	}
	else if (a > 61 && a < 67)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
