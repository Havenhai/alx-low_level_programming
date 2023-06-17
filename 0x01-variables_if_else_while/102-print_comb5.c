#include <stdio.h>

/**
 * main - Prints all possible combination of two two digits unmbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y, h;

	for (y = 0; y < 100; y++)
	{
	for (h = 0; h < 100; h++)
		if (h > y)
		{
			putchar((y / 10) + 48);
			putchar((y % 10) + 48);
			putchar(' ');
			putchar((h / 10) + 48);
			putchar((h % 10) + 48);
			if (y != 98 || h != 99)
			{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
