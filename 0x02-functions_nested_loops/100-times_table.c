#include "main.h"

/**
 * print_times_table - Prints the times table of the input.
 * @Z: The value
 */

void print_times_table(int Z)
{
	int num1, multi, prod;

	if (Z >= 0 && Z <= 15)
	{
	for (num1 = 0; num1 <= Z; num1++)
	{
	_putchar('0');
	for (multi = 1; multi <= Z; multi++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num1 * multi;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
		_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
