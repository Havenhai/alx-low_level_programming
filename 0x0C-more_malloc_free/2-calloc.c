#include <stdlib.h>
#include "main.h"

/**
 * *_mallocset - fills memory with a constant byte
 * The _calloc function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer
 * to the allocated memory.
 * @h: memory area to be filled
 * @y: char to copy
 * @t: number of times to copy y
 * Return: pointer to the memory area h
 */
char *_mallocset(char *h, char y, unsigned int t)
{
	unsigned int m;

	for (m = 0; m < t; m++)
	{
		h[m] = y;
	}

	return (h);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_mallocset(pointer, 0, nmemb * size);

	return (pointer);
}
