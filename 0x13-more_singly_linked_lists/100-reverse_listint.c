#include "lists.h"

/**
 * reverse_listint - C function reverses a linked list.
 * Initializes two pointers initially set to NULL
 * @head: Double pointer to the first node in the list.
 * Return: Pointer head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next_node;
		(*head)->next_node = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
