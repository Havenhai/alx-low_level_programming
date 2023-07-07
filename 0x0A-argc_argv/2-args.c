#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * All arguments are printed, including the first one
 * Only print one argument per line, ending with a new line
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int hh;

	for (hh = 0; hh < argc; hh++)
	{
		printf("%s\n", argv[hh]);
	}

	return (0);
}
