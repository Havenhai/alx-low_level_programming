#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * add_postive - check - string there are digit
 * @str: array string
 * numbers and the addition of all the numbers be stored in an int
 * Return: Always 0 (Success)
 */
int add_postive(char *str)
{
	unsigned int cot;

	cot = 0;
	while (cot < strlen(str))

	{
		if (!isdigit(str[cot]))
		{
			return (0);
		}

		cot++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Print the result, followed by a new line
 * If no number is passed to the program print 0 followed by new line
 * If one of the number contains symbols that are not digits print Error
 * followed by a new line, and return 1
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int cot;
	int changed;
	int sum = 0;

	cot = 1;
	while (cot < argc)
	{
		if (add_postive(argv[cot]))

		{
			changed = atoi(argv[cot]);
			sum += changed;
		}


		else
		{
			printf("Error\n");
			return (1);
		}

		cot++;
	}

	printf("%d\n", sum);

	return (0);
}
