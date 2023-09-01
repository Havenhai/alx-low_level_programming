#include "main.h"

/**
 * clear_bit - Resets the value of a designated bit to 0.
 *
 * This function takes a pointer to an unsigned long integer
 * 'num_havu_base' as its parameter,
 * representing a decimal number.
 * It also takes unsigned integer 'bit_havu_idx' indicating
 * the index of the bit that needs to be reset (set to 0).
 * The function resets the bit at
 * the specified index and returns 1 to indicate success.
 * If the provided index is beyond
 * the range [0, 63],the function returns -1 indicate failure.
 *
 * @num_havu_base: Pointer to the decimal number to modify.
 * @bit_havu_idx: Index of the bit to reset.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *num_havu_base, unsigned int bit_havu_idx)
{
	if (bit_havu_idx > 63)
	return (-1);

/*Use bitwise AND operation with complement of shifted 1 to clear bit.*/
	*num_havu_base = (~(1UL << bit_havu_idx) & *num_havu_base);

	return (1);
}
