#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * function that changes lowercase letters of string to uppercase.
 * @h: pointer to string.
 * Return: h
 */
char *string_toupper(char *h)
{
	int y;

	y = 0;
	while (h[y] != '\0')
	{
		if (h[y] >= 97 && h[y] <= 122)
			h[y] = h[y] - 32;
		y++;
	}
	return (h);
}
