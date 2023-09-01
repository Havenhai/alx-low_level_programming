#include "main.h"

/**
 * print_binary - Prints binary equivalent of decimal number.
 * This function takes unsigned long integer 'n_deci' as parameter,
 * representing a decimal number.
 * It converts the decimal number into its
 * binary representation and prints it to the standard output.
 * The binary
 * representation is printed without leading zeros
 * ensuring that only the
 * significant bits are shown.
 *
 * @n_deci: The decimal number to be converted
 * and printed in binary.
 */
void print_binary(unsigned long int n_deci)
{
	int current_bit_pos, bit = 0;
	unsigned long int current_bit;

	for (current_bit_pos = 63; current_bit_pos >= 0; current_bit_pos--)
	{
		current_bit = n_deci >> current_bit_pos;

		if (current_bit & 1)
		{
			_putchar('1');
			bit++;
		}
		else if (bit)
			_putchar('0');
	}
	if (!bit)
		_putchar('0');
}
