#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int h;
	long int largest;
	long int a;

	h = 612852475143;
	largest = -1;

	while (h % 2 == 0)
	{
		largest = 2;
		h /= 2;
	}

	for (a = 3; a <= sqrt(h); a = a + 2)
	{
		while (h % a == 0)
		{
			largest = a;
			h = h / a;
		}
	}

	if (h > 2)
		largest = h;

	printf("%ld\n", largest);

	return (0);
}
