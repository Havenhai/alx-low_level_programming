#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @have: pointer to the list_t list
 * function takes a pointer to the head of the linked list
 * traverses the list until it reaches the end
 * incrementing count variable for each node encountered
 * Return: number of elements in have
 */
size_t list_len(const list_t *have)
{
	size_t con = 0;

	while (have)
	{
		con++;
		have = have->next;
	}
	return (con);
}
