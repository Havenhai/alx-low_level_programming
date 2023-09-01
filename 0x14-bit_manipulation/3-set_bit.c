#include "main.h"

/**
 * set_bit - Sets a specific bit at a given index to 1.
 *
 * This function takes a pointer to an unsigned long integer
 * parameter, representing a decimal number.
 * It also takes an unsigned integer 'index_havubit'
 * indicating the index of the bit that needs to be set to 1.
 * The function sets the bit at
 * the specified index to 1 and returns 1 to indicate success.
 * If the provided index is
 * out of range (greater than 63),
 * the function returns -1 to indicate failure.
 * @numeral_sys: Pointer to the decimal number to modify.
 * @index_havubit: Index of the bit to set to 1.
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *numeral_sys, unsigned int index_havubit)
{
	if (index_havubit > 63)
	return (-1);

/*Use a bitwise OR operation with a shifted 1 to set the specified bit to 1.*/
	*numeral_sys = ((1UL << index_havubit) | *numeral_sys);

	return (1);
}
