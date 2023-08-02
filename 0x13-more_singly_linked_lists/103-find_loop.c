#include "lists.h"

/**
 * find_listint_loop - Search or finds the loop in linked list
 * Uses two pointers initially set to the head of the list
 * @head: Pointer to the head of the linked list.
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowest = head;
	listint_t *fastest = head;

	if (!head)
		return (NULL);

	while (slowest && fastest && fastest->next)
	{
		fastest = fastest->next->next;
		slowest = slowest->next;
		if (fastest == slowest)
		{
			slowest = head;
			while (slowest != fastest)
			{
				slowest = slowest->next;
				fastest = fastest->next;
			}
			return (fastest);
		}
	}

	return (NULL);
}
