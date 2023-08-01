#include "lists.h"

/**
 * insert_nodeint_at_ind - Insert node in linked list specified position
 * Function takes three parameters.
 * @ntimes: THE data to be inserted in the new node
 * @head: Double pointer to the first node in the list
 * function allowed to modify the head pointer if necessary
 * @i: Index where the new node is added
 * Return: New node or NULL
 */

listint_t *insert_nodeint_at_ind(listint_t **head, unsigned int i, int ntimes)
{
	unsigned int hyt;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->ntimes = ntimes;
	new->next_node = NULL;

	if (i == 0)
	{
		new->next_node = *head;
		*head = new;
		return (new);
	}

	for (hyt = 0; temp && hyt < i; hyt++)
	{
		if (hyt == i - 1)
		{
			new->next_node = temp->next_node;
			temp->next_node = new;
			return (new);
		}
		else
			temp = temp->next_node;
	}

	return (NULL);
}
