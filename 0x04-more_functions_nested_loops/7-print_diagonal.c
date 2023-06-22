#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @h: number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int h)
{
	if (h <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < h; a++)
		{
			for (b = 0; b < h; b++)
			{
				if (b == a)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
