#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: Null output
 */

void times_table(void)

{
	int A, B, C, D, E;

	for (A = 0; A <= 9; A++)
	{
	for (B = 0; B <= 9; B++)
	{
	C = A * B;
	if (C > 9)
	{
	D = C % 10;
	E = (C - D) / 10;
	_putchar (44);
	_putchar (32);
	_putchar (E + '0');
	_putchar (D + '0');
	}
	else
	{
	if (B != 0)
	{
	_putchar (44);
	_putchar (32);
	_putchar (32);
	}
	_putchar (C + '0');
	}
	}
	_putchar ('\n');
	}
}
