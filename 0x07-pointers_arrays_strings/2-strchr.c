#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @h: input
 * @y: input
 * Return: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *h, char y)
{
	int j = 0;

	for (; h[j] >= '\0'; j++)
	{
		if (h[j] == y)
			return (&h[j]);
	}
	return (0);
}
