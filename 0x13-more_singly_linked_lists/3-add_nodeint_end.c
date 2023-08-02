#include "lists.h"

/**
 * add_nodeint_end - Function adds a node at the end of linked list
 * @head: Double pointer to the first element in the list
 * @n: Data to insert in new element(integer)
 * Return: New node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tempor = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tempor->next)
		tempor = tempor->next;

	tempor->next = new_node;

	return (new_node);
}
