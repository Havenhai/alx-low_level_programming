#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @h: number of times the character should be printed
 * The line should end with a \n
 */

void print_line(int h)
{
	if (h <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		for (j = 1; j <= h; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
