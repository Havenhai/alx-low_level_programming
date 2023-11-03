#include "lists.h"

/**
 * sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t list.
 * @head: pointer to the list.
 * Return: sum of all data in the list,
 * 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sumi = 0;

	while (node)
	{
		sumi += node->n;
		node = node->next;
	}

	return (sumi);
}
