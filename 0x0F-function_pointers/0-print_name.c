#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @n: pointer to function
 * Return: nothing
 **/

void print_name(char *name, void (*n)(char *))
{
	if (name == NULL || n == NULL)
		return;

	n(name);
}
