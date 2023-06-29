#include "main.h"

/**
 * _strncat - function to concatenates two strings
 * @dest: destionation string pointer
 * @src: source string pointer
 * @h: number of bytes to be concated
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int h)
{
	int length_str;
	int hav;

	length_str = 0;
	while (dest[length_str] != '\0')
	{
		length_str++;
	}
	hav = 0;
	while (hav < h && src[hav] != '\0')
	{
	dest[length_str] = src[hav];
	length_str++;
	hav++;
	}
	dest[length_str] = '\0';
	return (dest);
}
