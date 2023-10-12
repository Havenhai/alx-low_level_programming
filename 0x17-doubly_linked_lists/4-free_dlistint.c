#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list of integers.
 *
 * This function takes a pointer to the head
 * of a doubly linked list and
 * iterates through the list, freeing each node one by one.
 * It ensures that
 * all memory allocated for the list is
 * properly deallocated to prevent
 * memory leaks.
 *
 * @head: A pointer to the head of the doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual_node;
	dlistint_t *next_node;

	if (head)
	{
		actual_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(actual_node);
			actual_node = next_node;
			next_node = next_node->next;
		}
		free(actual_node);
	}
}
