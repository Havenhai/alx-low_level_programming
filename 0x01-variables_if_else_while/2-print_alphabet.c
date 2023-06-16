#include <stdio.h>

/**
 * main - prints the lowercase alphabet.
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int k;

	for (k = 0; k < 26; k++)
	{
		putchar(alp[k]);
	}
	putchar('\n');
	return (0);
}
