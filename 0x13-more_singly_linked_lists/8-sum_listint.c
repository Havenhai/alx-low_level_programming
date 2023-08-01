#include "lists.h"

/**
 * sum_listint - Calculates sum of all data in Listint_t list
 * Function sum_listint takes a parameter head
 * @head: First node parameter in the linked list
 * Summation is intialized to 0.
 * Return: Summation.
 */
int sum_listint(listint_t *head)
{
	int summation = 0;
	listint_t *temp = head;

	while (temp)
	{
		summation += temp->ntimes;
		temp = temp->next_node;
	}

	return (summation);
}
