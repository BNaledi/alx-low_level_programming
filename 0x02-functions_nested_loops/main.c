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
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

#endif
