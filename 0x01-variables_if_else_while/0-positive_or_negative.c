#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print whether number stored in the variable n is positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		printf("n is positive\n", n);
	}
	else
	{
		Printf("n is negative\n", n);
	};
	return (0);
}
