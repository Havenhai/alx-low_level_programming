#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci unmbers
 * Return: 0
 */

int main(void)

{
	int h = 0;
	long y = 1, k = 2, sum = k;

	while (k + y < 4000000)
	{
	k += y;
	if (k % 2 == 0)
		sum += k;
			y = k - y;
	++h;
	}
	printf("%ld\n", sum);
	return (0);
}
