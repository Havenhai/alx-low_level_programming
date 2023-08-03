#include "main.h"

/**
 * print_binary - Fun prints the binary equivalent of a decimal number
 * The code defines a function called print_binary
 * That takes an unsigned long int hyz as input and
 * Prints its binary representation.
 * @hyz: Input number to print in binary
 */
void print_binary(unsigned long int hyz)
{
	int loop, counter = 0;
	unsigned long int current_bit;

	for (loop = 63; loop >= 0; loop--)
	{
		current_bit = hyz >> loop;

		if (current_bit & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
