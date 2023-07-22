#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * print_to_100 - program that prints the numbers from 1 to 100,
 * followed by a new line.
 * for multiples of three print Fizz instead of the number
 * for multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Numbers must be separated by a space.
 * May use standard library.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	while (n != 100)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((n % 5) == 0 && (n % 3) == 0)
/* can make condition n % 15 == 0 as summary. since 5*3=15 */
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}

	if (n < 100)
	{
		n++;
	}
	else
	{
		n--;
	}

	printf("Buzz");
	printf("\n");

	return (0);
}
