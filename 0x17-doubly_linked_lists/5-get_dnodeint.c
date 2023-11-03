#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at
 * the specified index in a doubly linked list.
 * This function traverses a given doubly
 * linked list starting from the head node and returns
 * the node found at the specified index.
 * The index is 0-based, meaning that the first node
 * is at index 0, the second at 1, and so on.
 * @head: A pointer to the head node of the doubly linked list.
 * @index: The index of the node to retrieve.
 * Return: If the node at the given index exists
 * a pointer to that node is returned.
 * If the index is out of range (less than  or
 * greater than the number of nodes), NULL is returned.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
