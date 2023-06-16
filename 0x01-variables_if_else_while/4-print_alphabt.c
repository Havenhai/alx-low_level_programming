#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints last digit if it is greater than 5, less than 6, or 0
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
