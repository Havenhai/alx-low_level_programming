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
	listint_t *tempory = head;

	while (tempory)
	{
		summation += tempory->n;
		tempory = tempory->next;
	}

	return (summation);
}
