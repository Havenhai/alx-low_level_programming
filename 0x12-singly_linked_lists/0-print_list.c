#include <stdio.h>
#include "lists.h"

/**
 * print_list - functions prints all elements of a list_t list
 * @have: pointer to the list_t list
 * If str is NULL, print [0] (nil)
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *have)
{
	size_t coun = 0;

	while (have)
	{
		if (!have->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", have->len, have->str);
	have = have->next;/*next points to the next node in the list*/
	coun++;
	}

	return (coun);
}
