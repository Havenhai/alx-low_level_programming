#include "main.h"

/**
 * flip_bits - This function calculates the number of bits
 * That need to be flipped in order to change one number
 * To get from one number to another
 * @hav: The First number
 * @have: The Second number
 * Return: Counter
 */
unsigned int flip_bits(unsigned long int hav, unsigned long int have)
{
	int loop, counter = 0;
	unsigned long int current_bit;
	unsigned long int exclusive = hav ^ have;

	for (loop = 63; loop >= 0; loop--)
	{
		current_bit = exclusive >> loop;
		if (current_bit & 1)
			counter++;
	}

	return (counter);
}
