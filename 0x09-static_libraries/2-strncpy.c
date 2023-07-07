#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @z: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int z)
{
	int ii;

	ii = 0;
	while (ii < z && src[ii] != '\0')
	{
		dest[ii] = src[ii];
		ii++;
	}
	while (ii < z)
	{
		dest[ii] = '\0';
		ii++;
	}

	return (dest);
}
