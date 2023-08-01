#include "lists.h"

/**
 * free_listint_safe - code used to frees a linked list
 * @have: Double pointer to the first node in the linked list
 * length keep track of number of elements in the freed list.
 * Return: Number of elements in the freed list(length)
 */

size_t free_listint_safe(listint_t **have)
{
	size_t length = 0;
	int difference;
	listint_t *tempor;

	if (!have || !*have)
		return (0);

	while (*have)
	{
		difference = *have - (*have)->next_node;
		if (difference > 0)
		{
			tempor = (*have)->next_node;
			free(*have);
			*have = tempor;
			length++;
		}
		else
		{
			free(*have);
			*have = NULL;
			length++;
			break;
		}
	}

	*have = NULL;

	return (length);
}
