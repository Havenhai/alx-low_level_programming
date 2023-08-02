#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @have: linked list of type listint_t to traverse
 * function takes a pointer to the head of the linked list
 * as its parameter and returns the number of elements in the list.
 * It initializes a variable number_counter to 0 and
 * pointer current to the head of the list.
 * Return: number of nodes
 */

size_t listint_len(const listint_t *have)
{
	size_t number_counter = 0;/*initializes*/

	while (have)
	{
		number_counter++;
		have = have->next;/*traverses the linked list to the next*/
	}

	return (number_counter);/*total number of elements in the linked list*/
}
