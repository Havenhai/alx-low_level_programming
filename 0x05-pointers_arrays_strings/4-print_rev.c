#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * followed by a new line.
 *
 * @str: The string to print
 *
 * return: void
 */

void print_rev(char *str)
{
	int lng = 0;
	int o;

	while (*str != '\0')
	{
		lng++;
		str++;
	}
	str--;
	for (o = lng; o > 0; o--)
	{
		_putchar(*str);
			str--;
	}
	_putchar('\n');
}
