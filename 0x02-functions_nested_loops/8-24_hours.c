#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of jack bauer
 * Return: ...
 */

void jack_bauer(void)
{
	int A, B, C, D;

	for (A = 0; A <= 2; A++)
	{
	for (B = 0; B <= 9; B++)
	{
	if ((A <= 1 && B <= 9) || (A <= 2 && B <= 3))
	{
	for (C = 0; C <= 5; C++)
	{
	for (D = 0; D <= 9; D++)
	{
	_putchar(A + '0');
	_putchar(B + '0');
	_putchar(58);
	_putchar(C + '0');
	_putchar(D + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
