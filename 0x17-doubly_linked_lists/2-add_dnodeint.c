#include "lists.h"

/**
 * add_dnodeint - Inserts a new node at the beginning
 * of a doubly linked list.
 * dlistint_len - Counts and returns the number of
 * elements in a doubly linked list.
 * @head: A pointer to the pointer that points to
 * the first element of the list.
 * @n: The integer value to set in the new node.
 * This function traverses a doubly linked
 * list of type `dlistint_t` and counts the
 * number of elements (nodes) within the list.
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
