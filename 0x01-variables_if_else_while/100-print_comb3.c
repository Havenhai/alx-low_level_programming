#include <stdio.h>

/**
 * main - Prints all possible different combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y, h;

	for (y = 48; y <= 56; y++)
	{
		for (h = 49; h <= 57; h++)
		{
		if (h > y)
		{
			putchar(y);
			putchar(h);
			if (y != 56 || h != 57)
			{
			putchar(',');
			putchar(' ');
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
