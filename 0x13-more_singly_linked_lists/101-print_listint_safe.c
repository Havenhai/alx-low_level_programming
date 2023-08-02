#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - C function counts the number of unique nodes
 * In looped linked list.
 * Uses tortoise and hare algorithm to detect if linked list has loop.
 * @head: Pointer to head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Or the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t unique_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				unique_nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				unique_nodes++;
				tortoise = tortoise->next;
			}

			return (unique_nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Function Prints element listint_t list safely
 * Calls looped_listint_len to determine whether the list has a loop
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t unique_nodes, ind = 0;

	unique_nodes = looped_listint_len(head);

	if (unique_nodes == 0)
	{
		for (; head != NULL; unique_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < unique_nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (unique_nodes);
}
