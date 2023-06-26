#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int h, sum, m;

	sum = 0;

	srand(time(NULL));

	for (h = 0; h < 100; h++)
	{
		pass[h] = rand() % 78;
		sum += (pass[h] + '0');
		putchar(pass[h] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}

	return (0);
}
