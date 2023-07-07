#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * two numbers and answer of multiplication be stored in an integer
 * @hh: string to be converte
 * Return: the int
 */

int _atoi(char *hh)
{
	int a, b, c, length, e, dig;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	e = 0;
	dig = 0;

	while (hh[length] != '\0')
		length++;

	while (a < length && e == 0)
	{
		if (hh[a] == '-')
			++b;

		if (hh[a] >= '0' && hh[a] <= '9')
		{
			dig = hh[a] - '0';
			if (b % 2)
				dig = -dig;
			c = c * 10 + dig;
			e = 1;
			if (hh[a + 1] < '0' || hh[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}

	if (e == 0)
		return (0);

	return (c);
}

/**
 * main - multiplies two numbers
 * print the result of the multiplication followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * If the program does not receive two arguments
 * your program should print Error, followed by a new line, and return 1
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int answer, numb1, numb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = _atoi(argv[1]);
	numb2 = _atoi(argv[2]);
	answer = numb1 * numb2;

	printf("%d\n", answer);

	return (0);
}
