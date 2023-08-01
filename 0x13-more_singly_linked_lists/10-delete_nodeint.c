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
		*head = (*head)->next_node;
		free(tempor);
		return (1);
	}

	while (hyt < index - 1)
	{
		if (!tempor || !(tempor->next_node))
			return (-1);
		tempor = tempor->next_node;
		hyt++;
	}


	current_position = tempor->next_node;
	tempor->next_node = current_position->next_node;
	free(current_position);

	return (1);
}
