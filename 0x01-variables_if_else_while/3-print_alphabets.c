#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	do {
		putchar(c);
		c++;
	} while ((c = 65, c <= 90) && (c = 97, c <= 122));

	putchar('\n');
	return (0);
}
