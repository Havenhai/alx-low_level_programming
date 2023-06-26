#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 *
 * @dest: destination for the copied value
 *
 * @src: Source
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int h = 0;
	int m = 0;

	while (*(src + h) != '\0')
	{
		h++;
	}
	for ( ; m < h ; m++)
	{
		dest[m] = src[m];
	}
	dest[h] = '\0';
	return (dest);
}
