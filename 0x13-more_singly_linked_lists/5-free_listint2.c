#include "lists.h"

/**
 * free_listint2 - Function that frees a linked list of listint_t.
 * Declares a temporary pointer temp of type listint_t.
 * @head: Double pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;/*declares temporary pointer*/

	if (head == NULL)/*if null, no linked list to free*/
		return;

	while (*head)
	{
		temp = (*head)->next_node;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
