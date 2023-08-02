#include "lists.h"

/**
 * pop_listint - c function deletes the head node of a linked list
 * @head: DOUBLE pointer
 * Free the memory occupied by the old head node using free.
 * Return: numo  Data inside the elements that was deleted
 * 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *Temporary_pointer;
	int numo;

	if (!head || !*head)
		return (0);

	numo = (*head)->n;
	Temporary_pointer = (*head)->next;
	free(*head);
	*head = Temporary_pointer;

	return (numo);
}

