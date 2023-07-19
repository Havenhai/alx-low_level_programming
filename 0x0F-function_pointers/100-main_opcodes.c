#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Usage: ./main number_of_bytes
 * Output format
 * the opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long
 * listing ends with a new lineline
 * You are allowed to use printf and atoi
 * You have to use atoi to convert the argument to an int
 * If the number of argument is not the correct one, print Error
 * followed by a new line, and exit with the status 1
 * If the number of bytes is negative, print Error and exit with the status 2
 * You do not have to compile with any flags
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, r;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (r = 0; r < bytes; r++)
	{
		if (r == bytes - 1)
		{
			printf("%02hhx\n", arr[r]);
			break;
		}
		printf("%02hhx ", arr[r]);
	}
	return (0);
}
