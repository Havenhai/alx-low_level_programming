#include <stdio.h>

/**
 * main - prints the lower and uppercase alphabet.
 * Return: Always 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int k;

	for (k = 0; k < 52; k++)
	{
		putchar(alp[k]);
	}
	putchar('\n');
	return (0);
}
