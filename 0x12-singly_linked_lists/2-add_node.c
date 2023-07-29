#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * prints the contents of the list
 * @head: double pointer to the list_t list
 * @strings: new string to add in the node
 * length: used to store the length of the string
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *strings)
{
	list_t *new_node;
	unsigned int length = 0;

	while (strings[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->strings = strdup(strings);
	new_node->length = length;
	new_node->next_node = (*head);
	(*head) = new_node;

	return (*head);
}
