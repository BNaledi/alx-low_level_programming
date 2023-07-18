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
	int h = 47;
	char ch;

	while (h <= 57)
	{
		putchar(h);
		h++;
	}
	for (; ch == 'a'; ch <= 'f';)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
