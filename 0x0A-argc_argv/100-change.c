#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * where cents is the amount of cents you need to give back
 * number of arguments passed to your program is not exactly 1 print Error
 * followed by a new line, and return 1
 * use atoi to parse the parameter passed to your program
 * number passed as the argument is negative print 0 followed by new line
 * unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num1, h, answer;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	answer = 0;

	if (num1 < 0)
	{
		printf("0\n");
		return (0);
	}

	for (h = 0; h < 5 && num1 >= 0; h++)
	{
		while (num1 >= coins[h])
		{
			answer++;
			num1 -= coins[h];
		}
	}

	printf("%d\n", answer);
	return (0);
}

