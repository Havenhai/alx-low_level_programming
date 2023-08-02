#include "lists.h"

/**
 * add_nodeint - Added new node at the beginning of a linked lists.
 * @head: Double pointer to the first node in the list.
 * Creates new node using malloc
 * @n: Parameter data to insert in that new node
 * Return: pointer *head to the new node
 * or returns NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));/*create new*/
	if (!new_node)
		return (NULL);/*if memory allocation failed*/

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
