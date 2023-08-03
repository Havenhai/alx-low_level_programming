#include "main.h"

/**
 * set_bit - C function sets a bit at a given index to 1
 * the function uses a bitwise OR operation
 * with the original value of *hav and
 * bitmask where only the bit at the index is set to 1
 * @hav: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *hav, unsigned int index)
{
	if (index > 63)
		return (-1);

	*hav = ((1UL << index) | *hav);
	return (1);
}
