#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @h1: input one to concat
 *The returned pointer should point to a newly allocated space in memory
 * which contains the contents of h1
 * followed by the contents of h2, and null terminated
 * @h2: input two to concat
 * Return: concat of h1 and h2
 */

char *str_concat(char *h1, char *h2)
{
	char *con;
	int j, c;

	if (h1 == NULL)
		h1 = "";
	if (h2 == NULL)
		h2 = "";

	j = c = 0;
	while (h1[j] != '\0')
		j++;
	while (h2[c] != '\0')
		c++;
	con = malloc(sizeof(char) * (j + c + 1));

	if (con == NULL)
		return (NULL);
	j = c = 0;
	while (h1[j] != '\0')
	{
		con[j] = h1[j];
		j++;
	}

	while (h2[c] != '\0')
	{
		con[j] = h2[c];
		j++, c++;
	}
	con[j] = '\0';
	return (con);
}
