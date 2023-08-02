#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node in a linked list at a certain index.
 * Takes two parameters
 * @head: Double Pointer to the first element in list
 * Finally, it frees the memory occupied by the node to be deleted
 * @index: Index of the node to delete
 * Return: 1 on a Success otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempor = *head;
	listint_t *current_position = NULL;
	unsigned int hyt = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempor);
		return (1);
	}

	while (hyt < index - 1)
	{
		if (!tempor || !(tempor->next))
			return (-1);
		tempor = tempor->next;
		hyt++;
	}


	current_position = tempor->next;
	tempor->next = current_position->next;
	free(current_position);

	return (1);
}
