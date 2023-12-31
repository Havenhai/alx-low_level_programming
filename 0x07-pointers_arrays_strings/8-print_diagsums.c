#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix integers.
 * @h: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *h, int size)
{
	int sum1, sum2, m;

	sum1 = 0;
	sum2 = 0;

	for (m = 0; m < size; m++)
	{
		sum1 = sum1 + h[m * size + m];
	}

	for (m = size - 1; m >= 0; m--)
	{
		sum2 += h[m * size + (size - m - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
