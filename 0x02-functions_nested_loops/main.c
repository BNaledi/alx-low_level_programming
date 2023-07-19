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
	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

#endif
