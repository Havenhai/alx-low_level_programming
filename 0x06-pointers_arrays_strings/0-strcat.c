#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destionation string pointer
 * @src: source string pointer
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length_str;
	int hav;

	length_str = 0;
	while (dest[length_str] != '\0')
	{
		length_str++;
	}
	hav = 0;
	while (src[hav] != '\0')
	{
		dest[length_str] = src[hav];
		length_str++;
		hav++;
	}

	dest[length_str] = '\0';
	return (dest);
}
