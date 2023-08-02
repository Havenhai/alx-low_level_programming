#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node in linked list specified position
 * Function takes three parameters.
 * @n: THE data to be inserted in the new node
 * @head: Double pointer to the first node in the list
 * function allowed to modify the head pointer if necessary
 * @idx: Index where the new node is added
 * Return: New node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int hyt;
	listint_t *new_node;
	listint_t *temppy = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (hyt = 0; temppy && hyt < idx; hyt++)
	{
		if (hyt == idx - 1)
		{
			new_node->next = temppy->next;
			temppy->next = new_node;
			return (new_node);
		}
		else
			temppy = temppy->next;
	}

	return (NULL);
}
