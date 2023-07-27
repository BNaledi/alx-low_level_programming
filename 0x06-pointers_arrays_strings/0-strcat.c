#include "main.h"

/**
 * *_strcat - prototype function
 *
 * Function that concatenates two strings.
 *
 * @dest: string 1
 * @src: string 2
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len;

	for (len = 0; *dest != '\0'; len++)
	{
		dest++;
	}
	while (*src != '\0')
	{
/*
 * At NULL for dest must begin src string)
 */
		*dest = *src;
/*
 * As we increment the now dest = dest+src) we are ensuring
 * more memory blocks to accom src len
 */
		dest++;
/*
 * At position opened up by dest+new block.
 * We place src as we go until its end
 */
		src++;
		len++;
	}
/*
 * Dereferencing dest to NULL at end, i.e. making it a variable,
 * changed only last address pointer points to 1
 * address at a time)
 */
	*dest = '\0';
	dest = dest - len;/* return to dest[0] */
	return (dest);
}
