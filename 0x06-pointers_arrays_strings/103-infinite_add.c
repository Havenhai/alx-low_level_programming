#include "main.h"

/**
 * rev_string - reverse array
 * @h: integer params
 * Return: 0
 */

void rev_string(char *h)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(h + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(h + j);
		*(h + j) = *(h + i);
		*(h + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @h1: text representation of 1st number to add
 * @h2: text representation of 2nd number to add
 * @y: pointer to buffer
 * @size_y: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *h1, char *h2, char *y, int size_y)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val = 0, val1 = 0, temp_tot = 0;

	while (*(h1 + i) != '\0')
		i++;
	while (*(h2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_y || i >= size_y)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val = 0;
		else
			val = *(h1 + i) - '0';
		if (j < 0)
			val1 = 0;
		else
			val1 = *(h2 + j) - '0';
		temp_tot = val + val1 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_y - 1))
			return (0);
		*(y + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_y)
		return (0);
	*(y + digits) = '\0';
	rev_string(y);
	return (y);
}

