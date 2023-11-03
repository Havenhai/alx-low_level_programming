#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux_node_hav = *head;
	dlistint_t *node_to_delete_hav = *head;
	unsigned int idx_hav;
	unsigned int cont_hav = 0;

	/* border case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*head = node_to_delete_hav->next;
		free(node_to_delete_hav);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	/* search of position to delete */
	idx_hav = index - 1;
	while (aux_node_hav && cont_hav != idx_hav)
	{
		cont_hav++;
		aux_node_hav = aux_node_hav->next;
	}

	/* general case */
	if (cont_hav == idx_hav && aux_node_hav)
	{
		node_to_delete_hav = aux_node_hav->next;
		if (node_to_delete_hav->next)
		node_to_delete_hav->next->prev = aux_node_hav;
		aux_node_hav->next = node_to_delete_hav->next;
		free(node_to_delete_hav);
		return (1);
	}

	return (-1);
}
