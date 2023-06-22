#include "main.h"

/**
 * print_number -function prints an integer
 * @h: integer to be printed
 */
void print_number(int h)
{
	unsigned int y;

	if (h < 0)
	{
		y = -h;
		_putchar('-');
	} else
	{
		y = h;
	}

	if (y / 10)
	{
		print_number(y / 10);
	}

	_putchar((y % 10) + '0');
}
