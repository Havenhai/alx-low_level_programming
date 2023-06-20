#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @Z: The number to be checked
 * Return: 1 for postive number, -1 for negative number or 0 for zero
 */

int print_sign(int Z)

	{
		if (Z > 0)
		{
		_putchar(43);
		return (1);
		}
		else if (Z < 0)
		{
		_putchar(45);
		return (-1);
		}
		else
		{
		_putchar(48);
		return (0);
		}
}
