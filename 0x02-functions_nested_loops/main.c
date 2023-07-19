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
	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

#endif
