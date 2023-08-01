#include "lists.h"

/**
 * add_nodeint_end - Function adds a node at the end of linked list
 * @head: Double pointer to the first element in the list
 * @ntimes: Data to insert in new element(integer)
 * Return: New node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int ntimes)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->ntimes = ntimes;
	new->next_node = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next_node)
		temp = temp->next_node;

	temp->next_node = new;

	return (new);
}
