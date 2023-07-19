#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * function that searches for an integer
 * @array: array
 * @size: is the number of elements in the array array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
