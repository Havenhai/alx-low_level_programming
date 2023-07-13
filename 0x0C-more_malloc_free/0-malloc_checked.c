#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function allocates memory using malloc
 * @hh: number of bytes to allocate
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int hh)
{
	void *pointer;

	pointer = malloc(hh);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
