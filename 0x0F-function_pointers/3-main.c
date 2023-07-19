#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * You have to use atoi to convert the argument to an int
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int number1, number2;
	char *oprand;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	oprand = argv[2];
	number2 = atoi(argv[3]);

	if (get_op_func(oprand) == NULL || oprand[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oprand == '/' && number2 == 0) ||
	    (*oprand == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(oprand)(number1, number2));

	return (0);
}
