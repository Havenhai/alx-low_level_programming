#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * where ptr is a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * old_size is the size, in bytes, of the allocated space for ptr
 * and new_size is the new size, in bytes of the new memory block
 * The contents will be copied to the newly allocated space
 * range from the start of ptr up to the minimum of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size)
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL
 * then the call is equivalent to free(ptr). Return NULL
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;
	char *old_ptr;
	unsigned int h;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	n_ptr = malloc(new_size);
	if (!n_ptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (h = 0; h < new_size; h++)
			n_ptr[h] = old_ptr[h];
	}

	if (new_size > old_size)
	{
		for (h = 0; h < old_size; h++)
			n_ptr[h] = old_ptr[h];
	}

	free(ptr);
	return (n_ptr);
}
