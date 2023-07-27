#include <stdlib.h>/* includes header files stdlib.h for the free()*/
#include "lists.h"/*lists.h for the definition of the list_t type*/

/**
 * free_list - takes a pointer to the head of the linked list
 * @head: list_t list to be freed
 * function frees memory occupied by linked list and elements
 */
void free_list(list_t *head)
{
	list_t *temporary_pointer;

	while (head)
	{
		temporary_pointer = head->next;
		free(head->str);
		free(head);
		head = temporary_pointer;
	}
}
