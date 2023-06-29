#include "main.h"

/**
 * print_number - print an integer numbers
 * @h: integer params
 * Return: void
 */

void print_number(int h)
{
	unsigned int ha;

	ha = h;

	if (h < 0)
	{
		_putchar('-');
		ha = -h;
	}

	if (ha / 10 != 0)
	{
		print_number(ha / 10);
	}
	_putchar((ha % 10) + '0');
}
