#include "lists.h"

/**
 * free_listint - Function that frees linked list.
 * Takes a pointer to the head of a linked list as its parameter.
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempor;/*temporarily store the next nodein a list*/

	while (head)
	{
		tempor = head->next;
		free(head);/*Deallocates the memory occupied*/
		head = tempor;/*updateed*/
	}
}
