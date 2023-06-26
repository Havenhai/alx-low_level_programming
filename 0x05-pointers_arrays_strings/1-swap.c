#include "main.h"

/**
 * swap_int - Function swaps the values of two integers.
 *
 * @h: The first integer to swaped.
 *
 * @t: The second integer to swaped.
 *
 * Return: nothing
 */

void swap_int(int *h, int *t)

	{
		int swap;

		swap = *h;
		*h = *t;
		*t = swap;
	}
