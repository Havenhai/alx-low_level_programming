#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Return: 0
 */

int main(void)

{
	int h = 0;
	long t = 1, k = 2;

	while (h < 50)
	{
	if (h == 0)
		printf("%ld", t);
	else if (h == 1)
		printf(", %ld", k);
	else
	{
		k += t;
		t = k - t;
		printf(", %ld", k);
	}
	++h;
	}
	printf("\n");
	return (0);

}
