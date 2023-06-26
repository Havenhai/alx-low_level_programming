#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int h;
	int t;

	h = 98;
	t = 42;
	printf("h=%d, t=%d\n", h, t);
	swap_int(&h, &t);
	printf("h=%d, t=%d\n", h, t);
	return (0);
}
