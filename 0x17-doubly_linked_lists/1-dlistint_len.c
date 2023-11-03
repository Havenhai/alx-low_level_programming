#include "lists.h"

/**
 * dlistint_len - Counts and returns the number of
 * elements in a doubly linked list.
 *
 * This function traverses a doubly linked list of
 * type `dlistint_t` and counts the
 * number of elements (nodes) within the list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list
 * which represents its length.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont_hav = 0;

	while (node)
	{
		cont_hav++;
		node = node->next;
	}

	return (cont_hav);
}
