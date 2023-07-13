#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * digit - checks if a string contains a non-digit char
 * @si: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int digit(char *si)
{
	int h = 0;

	while (si[h])
	{
		if (si[h] < '0' || si[h] > '9')
			return (0);
		h++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @sl: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *sl)
{
	int l = 0;

	while (sl[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error, followed by
 * a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not, print Error
 * followed by a new line, and exit with a status of 98
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *h1, *h2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	h1 = argv[1], h2 = argv[2];
	if (argc != 3 || !digit(h1) || !digit(h2))
		errors();
	len1 = _strlen(h1);
	len2 = _strlen(h2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = h1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(h2) - 1; len2 >= 0; len2--)
		{
			digit2 = h2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
