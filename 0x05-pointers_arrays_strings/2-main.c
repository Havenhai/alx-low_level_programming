#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *string;
	int length;

	string = "My first strlen!";
	length = _strlen(string);
	printf("%d\n", length);
	return (0);
}
