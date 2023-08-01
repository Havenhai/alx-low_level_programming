#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list
 * Function traverses linked list starting from head until desired index
 * or the end of the list
 * @head: A Pointer to first node in the linked list
 * @index: Indexs of the node to return
 * Return: Pointer to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int hyt = 0;
	listint_t *temp = head;

	while (temp && hyt < index)
	{
		temp = temp->next_node;/*updated*/
		hyt++;
	}

	return (temp ? temp : NULL);
}
