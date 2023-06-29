#include "main.h"
/**
 * _strncpy - a function that copy a string
 * @dest: destination string pointer
 * @src: source string pointer
 * @h: number of bytes to be used
 * Return: pointer to destination string dest
 */

char *_strncpy(char *dest, char *src, int h)
{
	int count_of_bytes;

	count_of_bytes = 0;
	while (count_of_bytes < h && src[count_of_bytes] != '\0')
	{
		dest[count_of_bytes] = src[count_of_bytes];
		count_of_bytes++;
	}
	while (count_of_bytes < h)
	{
		dest[count_of_bytes] = '\0';
		count_of_bytes++;
	}

	return (dest);
}
