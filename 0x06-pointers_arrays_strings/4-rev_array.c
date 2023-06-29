#include "main.h"
/**
 * reverse_array - function that reverse array of integers
 * @h: pointer to array.
 * @y: number of elements of array
 * Return: void
 */

void reverse_array(int *h, int y)
{
	int tem;
	int cou;

	for (tem = 0; tem < y--; tem++)
	{
		cou = h[tem];
		h[tem] = h[y];
		h[y] = cou;
	}
}
