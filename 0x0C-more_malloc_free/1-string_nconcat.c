#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates y bytes of a string to another string
 * @h1: string to append to
 * @h2: string to concatenate from
 * @y: number of bytes from h2 to concatenate to h1
 * If the function fails, it should return NULL
 * If y is <= to the length of h2 then use the entire string h
 * Return: pointer to the resulting string
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *h1, char *h2, unsigned int y)
{
	char *h;
	unsigned int m = 0, n = 0, len = 0, leng = 0;

	while (h1 && h1[len])
		len++;
	while (h2 && h2[leng])
		leng++;

	if (y < leng)
		h = malloc(sizeof(char) * (len + y + 1));
	else
		h = malloc(sizeof(char) * (len + leng + 1));

	if (!h)
		return (NULL);

	while (m < len)
	{
		h[m] = h1[m];
		m++;
	}

	while (y < leng && m < (len + y))
		h[m++] = h2[n++];

	while (y >= leng && m < (len + leng))
		h[m++] = h2[n++];

	h[m] = '\0';

	return (h);
}
