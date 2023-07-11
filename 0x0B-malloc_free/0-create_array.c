#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @h: char to assign
 * Description: create array of size size and assign char h
 * Returns NULL if size = 0
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char h)
{
	char *stri;
	unsigned int u;

	stri = malloc(sizeof(char) * size);
	if (size == 0 || stri == NULL)
		return (NULL);

	for (u = 0; u < size; u++)
		stri[u] = h;
	return (stri);
}
