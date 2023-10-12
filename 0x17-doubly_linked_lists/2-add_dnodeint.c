#include "lists.h"

/**
 * dlistint_len - Counts and returns the number of
 * elements in a doubly linked list.
 *
 * This function traverses a doubly linked
 * list of type `dlistint_t` and counts the
 * number of elements (nodes) within the list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list
 * which represents its length.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_hav;

	new_hav = malloc(sizeof(dlistint_t));
	if (new_hav == NULL)
		return (NULL);

	new_hav->n = n;
	new_hav->prev = NULL;
	new_hav->next = *head;
	if (*head)
		(*head)->prev = new_hav;
	*head = new_hav;

	return (new_hav);
}
