#include "lists.h"

/**
 * add_dnodeint_end - adds a new node
 * at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element
 * or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_hav, *aux = *head;

	new_hav = malloc(sizeof(dlistint_t));
	if (new_hav == NULL)
		return (NULL);
	new_hav->n = n;
	new_hav->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new_hav->prev = aux;
		aux->next = new_hav;
	}
	else
	{
		*head = new_hav;
		new_hav->prev = NULL;
	}

	return (new_hav);
}
