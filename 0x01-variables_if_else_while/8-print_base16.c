#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always 0
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
	}
	for (m = 97; m < 103; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
