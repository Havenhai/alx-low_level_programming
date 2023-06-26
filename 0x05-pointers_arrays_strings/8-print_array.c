#include "main.h"

/**
 * print_array - Function that prints m elements of an array
 * we use a for loop to iterate over all the elements of the array
 * printf() function to print each element with a space between them
 * @arr: array of integer combination
 * @m: is the number of elements Of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *arr, int m)
{
	int itr;

	for (itr = 0; itr < (m - 1); itr++)
	{
		printf("%d, ", arr[itr]);
	}
		if (itr == (m - 1))
		{
			printf("%d", arr[m - 1]);
		}
			printf("\n");
}
