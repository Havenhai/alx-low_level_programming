#include "main.h"

/**
 * get_bit - Function returns the value of a bit at an index.
 * @ha: Input number.
 * It is used to retrieve the value of a bit at a specific index 
 * In the binary representation of n.
 * @index: Index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int ha, unsigned int index)
{
	int bit_valued;

	if (index > 63)
		return (-1);

	bit_valued = (ha >> index) & 1;

	return (bit_valued);
}
