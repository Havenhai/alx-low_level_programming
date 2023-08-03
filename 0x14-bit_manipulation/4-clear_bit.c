#include "main.h"

/**
 * clear_bit -Function named clear_bit that clears a bit
 * At a given index in an unsigned long integer.
 * Sets the value of a given bit to 0
 * @hav: Pointer to the number to changed
 * @index: Index of the bit to clear
 *
 * Return: 1(success), -1(failure)
 */
int clear_bit(unsigned long int *hav, unsigned int index)
{
	if (index > 63)
		return (-1);

	*hav = (~(1UL << index) & *hav);
	return (1);
}
