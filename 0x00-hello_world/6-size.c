#include <stdio.h>
/**
 * main - Entry point
 *
 *Program that prints the size of various data types on the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %c byte(s)\n", (char)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (int)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (long int)sizeof(c));
	printf("Size of a long long int: %llu byte(s)\n", (long long int)sizeof(d));
	printf("Size of a float: %f byte(s)\n", (float)sizeof(e));
	return(0);
}
