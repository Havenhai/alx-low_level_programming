#include "main.h"

/**
 * puts_half - Function that prints half of a string followed by a new line
 *
 * The function print the second half of the string
 *
 * If number of chara is odd, the function print last n char of the string.
 *
 * where n = (length_of_the_string - 1) / 2
 * @str: the string to be printed
 * Return: void
 */

void puts_half(char *str)

{
	int h;
	int y = 0;

	while ((str[y]) != '\0')
	{
		y++;
	}

	if (y % 2 == 1)
	{
		h = ((y - 1) / 2);
		h += 1;
	}
	else
	{
		h = y / 2;
	}

	for (; h < y; h++)
	{
		_putchar(str[h]);
	}
		_putchar('\n');
}
