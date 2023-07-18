#include <stdio.h>
#include"main.h"

/**
 * main - Entry point
 *
 * Prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	char string[] = "_putchar\n";

	while (a < 9)
	{
		putchar(string[a]);
		a++;
	}
	
	return (0);
}
