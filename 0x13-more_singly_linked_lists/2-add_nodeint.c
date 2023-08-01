#include "lists.h"

/**
 * add_nodeint - Added new node at the beginning of a linked lists.
 * @head: Double pointer to the first node in the list.
 * Creates new node using malloc
 * @ntimes: Parameter data to insert in that new node
 * Return: pointer *head to the new node
 * or returns NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int ntimes)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));/*create new*/
	if (!new)
		return (NULL);/*if memory allocation failed*/

	new->ntimes = ntimes;
	new->next_node = *head;
	*head = new;

	return (new);
}
