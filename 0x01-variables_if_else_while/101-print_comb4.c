#include <stdio.h>
/**
 * main - Prints all possible different combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y, h, a;

	for (y = 48; y < 58; y++)
	{
		for (h = 49; h < 58; h++)
		{
			for (a = 50; a < 58; a++)
			{
				if (a > h && h > y)
				{
					putchar(y);
					putchar(h);
					putchar(a);
					if (y != 55 || h != 56)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
		}
	putchar('\n');
	return (0);
}
