#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * Return: 0
 * Returns NULL if str = NULL
 * the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ha;
	int j, m = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	ha = malloc(sizeof(char) * (j + 1));

	if (ha == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		ha[m] = str[m];

	return (ha);
}
