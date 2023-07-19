#ifndef MAIN_C
#define MAIN_C

#include "main.h"

/**
 * main - check the code
 *
 * main.c file - to test my prototypes saved in main.h.
 *
 * prototypes listed in main.h
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}


#endif
