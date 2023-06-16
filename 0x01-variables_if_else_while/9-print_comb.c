#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int t;

	for (t = 48; t < 58; t++)
	{
		putchar(t);
		if (t != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
