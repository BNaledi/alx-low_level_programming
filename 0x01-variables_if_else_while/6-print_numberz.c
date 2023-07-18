#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all single digit numbers of base 10
 * starting from 0,
 * followed by a new line.
 *
 * May not us eany variable of type char.
 * Can only use putchar twice in your code.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
