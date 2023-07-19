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
	
	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}


#endif
