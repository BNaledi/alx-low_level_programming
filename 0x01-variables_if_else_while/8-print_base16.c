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
	char ch;

	while (hexi < 10)
	{
		putchar(hexi);
		hexi++;
	}
	for (; ch == 'a'; ch <= 'f';)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
