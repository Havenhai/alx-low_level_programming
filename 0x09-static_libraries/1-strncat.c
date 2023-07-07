#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @zz: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int zz)
{
	int ii;
	int jj;

	ii = 0;
	while (dest[ii] != '\0')
	{
		ii++;
	}
	jj = 0;
	while (jj < zz && src[jj] != '\0')
	{
	dest[ii] = src[jj];
	ii++;
	jj++;
	}
	dest[ii] = '\0';
	return (dest);
}
