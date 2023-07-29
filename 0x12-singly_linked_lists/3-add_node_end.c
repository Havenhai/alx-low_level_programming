#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @strngs: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *strings)
{
	list_t *new_node;/*create a new node*/
	list_t *tempor = *head;
	unsigned int length = 0;

	while (strings[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->strings = strdup(strings);
	new_node->length = length;
	new_node->next_node = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tempor->next_node)
		tempor = tempor->next_node;

	tempor->next_node = new_node;

	return (new_node);
}
