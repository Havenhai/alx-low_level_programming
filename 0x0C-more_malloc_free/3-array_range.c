#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * The array created should contain the values from min (included) to max
 * ordered from min to max
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * If min > max, return NULL
 * If malloc fails, return NULL
 * Return: pointer to the new array
 */

int *array_range(int min, int max)

{
	int *pointer;
	int m, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (m = 0; min <= max; m++)
		pointer[m] = min++;

	return (pointer);
}
