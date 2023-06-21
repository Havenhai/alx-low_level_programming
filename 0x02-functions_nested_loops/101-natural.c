#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024.
 * Return: Always 0.
 */

int main(void)

{
	int h, y = 0;

	while (h < 1024)
	{
	if ((h % 3 == 0) || (h % 5 == 0))
	{
	y += h;
	}
	h++;
	}
	printf("%d\n", y);
	return (0);
}
