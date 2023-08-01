#include "lists.h"

/**
 * pop_listint - Used to Deletes the head node of a linked list
 * @head: Double pointer to the first element in the linked list
 * Declares a temporary variable temp of type listint_t and
 * an integer variable hyt
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int hyt;

	if (!head || !*head)
		return (0);

	hyt = (*head)->ntimes;
	temp = (*head)->next_node;
	free(*head);
	*head = temp;

	return (hyt);
}

