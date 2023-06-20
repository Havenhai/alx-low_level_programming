#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @z: The input number
 * Return: The value of last digit of number
 */

int print_last_digit(int z)

{
	int lastdigit;

	lastdigit = z % 10;
	if (lastdigit < 0)
	{
	lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
