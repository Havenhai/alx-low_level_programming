#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * If you rename the program, it will print the new name
 * without having to compile it again
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
