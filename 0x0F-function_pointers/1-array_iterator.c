#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function give as a parameter
 * each array element on a array.
 * @array: an array.
 * @size: the size of array.
 * @action: pointer to print in regular or hex to be executed.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/**unsigned int i;*/

	if (array == NULL || action == NULL)
		return;

	/**
	 * for (i = 0; i < size; i++)
	*{
	*	action(array[i]);
	*}
	*/
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
