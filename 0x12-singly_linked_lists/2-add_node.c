#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * prints the contents of the list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * leng: used to store the length of the string
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int leng = 0;

	while (str[leng])
		leng++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->leng = leng;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
