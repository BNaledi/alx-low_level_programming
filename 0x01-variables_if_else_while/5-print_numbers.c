#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all single digit numbers of base 10
 * starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
