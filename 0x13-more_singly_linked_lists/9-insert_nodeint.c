#include "lists.h"

/**
 * insert_nodeint_at_ind - Insert node in linked list specified position
 * Function takes three parameters.
 * @n: THE data to be inserted in the new node
 * @head: Double pointer to the first node in the list
 * function allowed to modify the head pointer if necessary
 * @i: Index where the new node is added
 * Return: New node or NULL
 */

listint_t *insert_nodeint_at_ind(listint_t **head, unsigned int i, int n)
{
	unsigned int hyt;
	listint_t *new_node;
	listint_t *temppry = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (i == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (hyt = 0; temppry && hyt < i; hyt++)
	{
		if (hyt == i - 1)
		{
			new_node->next = temppry->next;
			temppry->next = new_node;
			return (new_node);
		}
		else
			temppry = temppry->next;
	}

	return (NULL);
}
