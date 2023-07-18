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
	int hexi = 0;

	for (; hexi => 0 && hexi < 10; hexi++)
	{
		putchar(0 + hexi);
	}
	for (; hexi > 'a' && hexi <= 'f';)
	{
		putchar(hexi);
		hexi++;
	}
	putchar('\n');
	return (0);
}
