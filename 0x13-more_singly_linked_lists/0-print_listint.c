#include "lists.h"

/**
 * print_listint - prints all the elements of linked listint_t list
 * @have: linked list of type listint_t to print
 * function takes pointer to the head of the list (have)
 * iterates through a list using a while loop
 * Return: number of nodes in the list
 * prints the value and update the variable
 */

size_t print_listint (const listint_t *have)

{
	size_t number_counter = 0;

	while (have)
	{
		printf("%d\n", have->ntimes);
		number_counter++;
		have = have->next_node;
	}

	return (number_counter);
}
